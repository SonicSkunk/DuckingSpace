// DuckingSpace reverb: HALL (zita-rev1 structure, with size and modulation)
import("stdfaust.lib");

decay = hslider("Decay", 0.5, 0.0, 1.0, 0.001);
size  = hslider("Size", 0.32, 0.0, 1.0, 0.001);
damp  = hslider("Damping", 0.3, 0.0, 1.0, 0.001);
diff  = hslider("Diffusion", 0.84, 0.0, 1.0, 0.001);
depth = hslider("Modulation", 0.32, 0.0, 1.0, 0.001);

N = 8;
fsmax = 96000.0;
smax = 1.85;
seconds = 0.8 + 11.2 * pow(decay, 2.353);
scale = (0.6 + 1.25 * size) : si.smooth(ba.tau2pole(0.3));
f1 = 200.0;
f2 = min(16000.0 * pow(2.0, -4.5 * damp), 0.45 * ma.SR);
modSamples = depth * 0.0006 * ma.SR;

g1 = min(0.8, 0.75 * diff / 0.84);
g2 = min(0.7, 0.625 * diff / 0.84);
ap(D, g) = (+ <: (de.delay(8192, int(D * ma.SR / 44100) - 1), *(0 - g))) ~ *(g) : (mem, _) : +;
diffL = ap(211, g1) : ap(157, g1) : ap(563, g2) : ap(409, g2);
diffR = ap(223, g1) : ap(167, g1) : ap(587, g2) : ap(431, g2);
hp = fi.highpass(2, 60);
pre = de.fdelay(16384, 0.02 * ma.SR * scale) * 0.3;

fdn = ((si.bus(2 * N) :> allpass_combs : ro.hadamard(N)) ~ (delayfilters : fbdelaylines))
with {
  apdelays = (0.020346, 0.024421, 0.031604, 0.027333, 0.022904, 0.029291, 0.013458, 0.019123);
  tdelays  = (0.153129, 0.210389, 0.127837, 0.256891, 0.174713, 0.192303, 0.125000, 0.219991);
  rates    = (0.13, 0.17, 0.19, 0.23, 0.29, 0.31, 0.37, 0.41);
  tdelay(i)  = ma.SR * ba.take(i + 1, tdelays) * scale;
  apdelay(i) = ma.SR * ba.take(i + 1, apdelays) * scale;
  fbdelay(i) = tdelay(i) - apdelay(i);
  maxap(i) = 16384;
  maxfb(i) = 131072;
  apcoeff(i) = select2(i & 1, 0.6, -0.6);
  apcomb(i) = (+ <: de.fdelay(maxap(i), apdelay(i) - 1), *(apcoeff(i))) ~ *(0 - apcoeff(i)) : mem, _ : +;
  allpass_combs = par(i, N, apcomb(i));
  lfo(i) = sin(2.0 * ma.PI * ba.take(i + 1, rates) * ba.time / ma.SR + i * 0.7);
  fbdelaylines = par(i, N, de.fdelay(maxfb(i), fbdelay(i) + modSamples * (1.0 + lfo(i))));
  delayfilters = par(i, N, filt(i));
  staynormal = 10.0 ^ (-20);
  special_lowpass(g, f) = si.smooth(p) with {
    p = mbo2 - sqrt(max(0, mbo2 * mbo2 - 1.0));
    mbo2 = (1.0 - gs * c) / (1.0 - gs);
    gs = g * g;
    c = cos(2.0 * ma.PI * f / float(ma.SR));
  };
  filt(i) = lowshelf_lowpass / sqrt(float(N)) + staynormal
  with {
    lowshelf_lowpass = gM * low_shelf1_l(g0 / gM, f1) : special_lowpass(gM, f2);
    low_shelf1_l(G0, fx, x) = x + (G0 - 1) * fi.lowpass(1, fx, x);
    g0 = g(seconds * 0.75);
    gM = g(seconds);
    g(dur) = exp(-3.0 * log(10.0) * tdelay(i) / (dur * ma.SR));
  };
};

distrib = _, _ <: _, _, *(-1), *(-1), _, _, *(-1), *(-1);
outmix = !, ro.butterfly(2), !, par(i, 4, !);

process = (hp : diffL : pre), (hp : diffR : pre) : distrib : fdn : outmix : *(0.73), *(0.73);
