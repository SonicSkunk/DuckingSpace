// DuckingSpace reverb: CLASSIC
import("stdfaust.lib");

decay = hslider("Decay", 0.5, 0.0, 1.0, 0.001);
size  = hslider("Size", 0.32, 0.0, 1.0, 0.001);
damp  = hslider("Damping", 0.3, 0.0, 1.0, 0.001);
diff  = hslider("Diffusion", 0.84, 0.0, 1.0, 0.001);
depth = hslider("Modulation", 0.32, 0.0, 1.0, 0.001);

seconds = 0.8 + 11.2 * pow(decay, 2.353);
t60 = max(0.75, (max(1.7, seconds) - 0.1) / 1.9) * tcomp;

// Diffusion: eased in below the default (0.84), unchanged above it.
dq = select2(diff > 0.84, 0.84 * pow(diff / 0.84, 2.5), diff) : si.smoo;
// Low diffusion shortens the tail, so lengthen it back a little.
tcomp = 1.0 + 0.15 * (1.0 - pow(min(dq, 0.84) / 0.84, 3.0));

// Modulation: eased in so low settings stay subtle, same pitch swing at any sample rate.
mdepth = 0.6 * pow(depth, 1.75) * min(ma.SR, 192000.0) / 44100.0 : si.smoo;

g1 = min(0.8, 0.75 * dq / 0.84);
g2 = min(0.7, 0.625 * dq / 0.84);
ap(D, g) = (+ <: (de.delay(8192, int(D * ma.SR / 44100) - 1), *(0 - g))) ~ *(g) : (mem, _) : +;
diffL = ap(211, g1) : ap(157, g1) : ap(563, g2) : ap(409, g2);
diffR = ap(223, g1) : ap(167, g1) : ap(587, g2) : ap(431, g2);
pre = de.delay(8192, int(0.02 * ma.SR));
hp = fi.highpass(2, 80);

// Modulation, part 2: a stereo chorus on the reverb. This is the part you hear.
// The knob raises the chorus level (full at 60%) and its depth (up to 3 ms of swing).
amt = depth : si.smoo;
chTheta = min(1.0, amt / 0.6) * ma.PI / 4.0;
chSwing = 0.003 * pow(amt, 1.5) * ma.SR;
chBase = 0.006 * ma.SR;
chPhase(r) = (+(r / ma.SR) : ma.frac) ~ _;
chLfo(r, p) = sin(2.0 * ma.PI * ma.frac(chPhase(r) + p));
chTap(r, p) = de.fdelay(4096, chBase + chSwing * chLfo(r, p));
chorus(p) = _ <: *(cos(chTheta)), ((_ <: chTap(0.55, p), chTap(0.83, p + 0.25)) :> *(0.5 * sin(chTheta))) :> _;

process = (hp : pre : diffL), (hp : pre : diffR)
        : re.jpverb(t60, 0.85 * pow(damp, 0.865), 1.0 + 3.0 * size, dq, mdepth, 1.2, 0.6, 1.0, 0.8, 300, 6000)
        : *(1.17), *(1.17) : chorus(0.0), chorus(0.5);
