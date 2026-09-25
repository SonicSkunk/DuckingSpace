// DuckingSpace reverb: CLASSIC
import("stdfaust.lib");

decay = hslider("Decay", 0.5, 0.0, 1.0, 0.001);
size  = hslider("Size", 0.32, 0.0, 1.0, 0.001);
damp  = hslider("Damping", 0.3, 0.0, 1.0, 0.001);
diff  = hslider("Diffusion", 0.84, 0.0, 1.0, 0.001);
depth = hslider("Modulation", 0.32, 0.0, 1.0, 0.001);

seconds = 0.8 + 11.2 * pow(decay, 2.353);
t60 = max(0.75, (max(1.7, seconds) - 0.1) / 1.9);

g1 = min(0.8, 0.75 * diff / 0.84);
g2 = min(0.7, 0.625 * diff / 0.84);
ap(D, g) = (+ <: (de.delay(8192, int(D * ma.SR / 44100) - 1), *(0 - g))) ~ *(g) : (mem, _) : +;
diffL = ap(211, g1) : ap(157, g1) : ap(563, g2) : ap(409, g2);
diffR = ap(223, g1) : ap(167, g1) : ap(587, g2) : ap(431, g2);
pre = de.delay(8192, int(0.02 * ma.SR));
hp = fi.highpass(2, 80);

process = (hp : pre : diffL), (hp : pre : diffR)
        : re.jpverb(t60, 0.85 * pow(damp, 0.865), 1.0 + 3.0 * size, diff, depth, 0.1, 0.6, 1.0, 0.8, 300, 6000)
        : *(1.17), *(1.17);
