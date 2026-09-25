// DuckingSpace

Content.makeFrontInterface(700, 400);

// ---- Fonts -----------------------------------------------------------------
Engine.loadFontAs("{PROJECT_FOLDER}Fonts/Duck.ttf", "Duck");
Engine.loadFontAs("{PROJECT_FOLDER}Fonts/DuckSans-SemiBold.ttf", "SansSemi");
Engine.loadFontAs("{PROJECT_FOLDER}Fonts/DuckSans-Medium.ttf", "SansMed");
Engine.loadFontAs("{PROJECT_FOLDER}Fonts/DuckMono-Medium.ttf", "MonoMed");
Engine.loadFontAs("{PROJECT_FOLDER}Fonts/DuckMono-Bold.ttf", "MonoBold");

// ---- Colours ---------------------------------------------------------------
const var C_BG = 0xFF0E1015;
const var C_PURPLE = 0xFF762EFF;
const var C_CYAN = 0xFF2EFFE9;
const var C_GOLD = 0xFFFFC100;
const var C_LABEL = 0xFF8B93A6;
const var C_LABEL_HI = 0xFFCFD5E1;
const var C_TEXT = 0xFFFFFFFF;
const var C_GROOVE = 0xFF06070A;

const var ARC = 2.4;

// ---- Drawing helpers -------------------------------------------------------
inline function lookStroke(t)
{
	return {"Thickness": t, "EndCapStyle": "rounded", "JointStyle": "curved"};
}

inline function lookArc(cx, cy, r, a0, a1)
{
	local p = Content.createPath();
	p.addArc([cx - r, cy - r, 2.0 * r, 2.0 * r], a0, a1);
	return p;
}

inline function lookStrokePath(g, p, t)
{
	g.drawPath(p, p.getBounds(1.0), lookStroke(t));
}

inline function lookGradArc(g, cx, cy, r, a0, a1, t, alpha)
{
	local p = 0;

	if (Math.abs(a1 - a0) > 0.01)
	{
		p = lookArc(cx, cy, r, Math.min(a0, a1), Math.max(a0, a1));
		g.setGradientFill([Colours.withAlpha(C_PURPLE, alpha), cx - r, cy + r, Colours.withAlpha(C_CYAN, alpha), cx + r, cy - r]);
		lookStrokePath(g, p, t);
	}
}

inline function lookValueArc(g, cx, cy, r, a0, a1, t, strong)
{
	lookGradArc(g, cx, cy, r, a0, a1, t * 2.6, strong ? 0.16 : 0.1);
	lookGradArc(g, cx, cy, r, a0, a1, t * 1.7, strong ? 0.32 : 0.22);
	lookGradArc(g, cx, cy, r, a0, a1, t, 1.0);
}

inline function lookGroove(g, cx, cy, r, t)
{
	local p = lookArc(cx, cy, r, -ARC, ARC);
	local shape = p.createStrokedPath(lookStroke(t), []);
	local b = shape.getBounds(1.0);

	g.setColour(C_GROOVE);
	g.fillPath(shape, b);
	g.drawInnerShadowFromPath(shape, b, 0xE6000000, Math.round(t * 0.28), [0, Math.round(t * 0.22)]);
	g.drawInnerShadowFromPath(shape, b, 0x1AFFFFFF, Math.max(1, Math.round(t * 0.18)), [0, -Math.max(1, Math.round(t * 0.14))]);

	local lr = r + t * 0.5 + 0.8;
	g.setGradientFill([0x00FFFFFF, cx, cy - lr, 0x21FFFFFF, cx, cy + lr]);
	lookStrokePath(g, lookArc(cx, cy, lr, -ARC, ARC), 1.0);
}

inline function lookDot(g, cx, cy, r, a, rDot, rGlow)
{
	local x = cx + r * Math.sin(a);
	local y = cy - r * Math.cos(a);

	g.setColour(0x262EFFE9);
	g.fillEllipse([x - rGlow * 1.5, y - rGlow * 1.5, rGlow * 3.0, rGlow * 3.0]);
	g.setColour(0x552EFFE9);
	g.fillEllipse([x - rGlow, y - rGlow, rGlow * 2.0, rGlow * 2.0]);
	g.setColour(C_TEXT);
	g.fillEllipse([x - rDot, y - rDot, rDot * 2.0, rDot * 2.0]);
}

inline function lookText(g, s, font, h, k, colour, area, align)
{
	local a = [area[0], area[1], area[2], area[3]];

	if (align == "centred")
		a[0] = a[0] + k * h * 0.5;

	if (align == "right")
		a[0] = a[0] + k * h;

	g.setColour(colour);
	g.setFontWithSpacing(font, h, k);
	g.drawAlignedText(s, a, align);
}

inline function lookPercent(v)
{
	return Math.round(v * 100.0) + "%";
}

inline function lookValueText(id, v)
{
	local c = Math.round((v - 0.5) * 200.0);

	if (id == "Knob3")
		return Engine.doubleToString(0.1 + v * 11.9, 1) + "s";

	if (id == "Knob8")
		return c > 0 ? "+" + c : "" + c;

	return lookPercent(v);
}

inline function lookDb(v)
{
	local r = Math.round(v * 10.0) / 10.0;

	if (Math.abs(r) < 0.05)
		return "0.0 dB";

	return (r > 0.0 ? "+" : "") + Engine.doubleToString(r, 1) + " dB";
}

// ---- Background ------------------------------------------------------------
const var PanelBG = Content.getComponent("PanelBG");

PanelBG.setPaintRoutine(function(g)
{
	g.fillAll(C_BG);

	g.setGradientFill([0x38762EFF, 150, 230, 0x00762EFF, 400, 230, true]);
	g.fillRect([0, 0, 700, 400]);
	g.setGradientFill([0x122EFFE9, 520, 210, 0x002EFFE9, 790, 210, true]);
	g.fillRect([0, 0, 700, 400]);

	g.setColour(0x07FFFFFF);
	g.fillRoundedRectangle([16, 60, 270, 284], 14);
	g.fillRoundedRectangle([298, 60, 386, 284], 14);
	g.setColour(0x12FFFFFF);
	g.drawRoundedRectangle([16.5, 60.5, 269, 283], 14, 1);
	g.drawRoundedRectangle([298.5, 60.5, 385, 283], 14, 1);

	lookText(g, "DUCKING", "SansSemi", 14.85, 0.193, C_LABEL, [30, 71, 150, 14.85], "left");
	lookText(g, "REVERB", "SansSemi", 14.85, 0.193, C_LABEL, [312, 71, 150, 14.85], "left");

	g.setFont("Duck", 33.6);
	g.drawAlignedTextShadow("DuckingSpace", [18, 10, 330, 34], "left", {"Colour": 0x73FFC100, "Radius": 18, "Offset": [0, 0]});
	g.drawAlignedTextShadow("DuckingSpace", [18, 10, 330, 34], "left", {"Colour": 0x80000000, "Radius": 1, "Offset": [0, 2]});
	g.setColour(C_GOLD);
	g.drawAlignedText("DuckingSpace", [18, 10, 330, 34], "left");
});

// ---- Ducking ---------------------------------------------------------------
const var lafDucking = Content.createLocalLookAndFeel();

lafDucking.registerFunction("drawRotarySlider", function(g, obj)
{
	var cx = 110.0;
	var cy = 106.0;
	var av = -ARC + 2.0 * ARC * obj.valueNormalized;
	var strong = obj.hover || obj.clicked;

	lookGroove(g, cx, cy, 94.0, 17.0);
	lookValueArc(g, cx, cy, 94.0, -ARC, av, 7.0, strong);
	lookDot(g, cx, cy, 94.0, av, 4.5, 8.0);

	lookText(g, lookPercent(obj.value), "MonoBold", 39.6, 0.0, C_TEXT, [0, 79.4, 220, 39.6], "centred");
	lookText(g, "AMOUNT", "SansSemi", 13.5, 0.178, C_LABEL, [0, 116.1, 220, 13.5], "centred");
});

Content.getComponent("Ducking").setLocalLookAndFeel(lafDucking);

// ---- Speed -----------------------------------------------------------------
const var lafSpeed = Content.createLocalLookAndFeel();

lafSpeed.registerFunction("drawRotarySlider", function(g, obj)
{
	var cx = 55.0;
	var cy = 55.0;
	var r = 46.0;
	var av = -ARC + 2.0 * ARC * obj.valueNormalized;
	var strong = obj.hover || obj.clicked;

	g.setColour(0x0FFFFFFF);
	lookStrokePath(g, lookArc(cx, cy, r, -ARC, ARC), 4.0);
	lookValueArc(g, cx, cy, r, -ARC, av, 4.0, strong);

	g.setColour(C_TEXT);
	g.fillEllipse([cx + r * Math.sin(av) - 3.0, cy - r * Math.cos(av) - 3.0, 6.0, 6.0]);

	lookText(g, "SPEED", "SansSemi", 13.5, 0.178, strong ? C_LABEL_HI : C_LABEL, [0, 89.1, 110, 13.5], "centred");
	lookText(g, Math.round(obj.value) + " ms", "MonoMed", 13.86, 0.0, 0xFFCFD5E1, [0, 102.3, 110, 13.86], "centred");
});

Content.getComponent("Knob2").setLocalLookAndFeel(lafSpeed);

// ---- Reverb knobs ----------------------------------------------------------
const var lafReverb = Content.createLocalLookAndFeel();

lafReverb.registerFunction("drawRotarySlider", function(g, obj)
{
	var cx = 45.0;
	var cy = 38.0;
	var r = 30.4;
	var av = -ARC + 2.0 * ARC * obj.valueNormalized;
	var a0 = obj.id == "Knob8" ? 0.0 : -ARC;
	var strong = obj.hover || obj.clicked;

	lookGroove(g, cx, cy, r, 7.6);
	lookValueArc(g, cx, cy, r, a0, av, 2.8, strong);
	lookDot(g, cx, cy, r, av, 2.6, 4.6);

	lookText(g, lookValueText(obj.id, obj.value), "MonoMed", 15.05, 0.0, C_TEXT, [0, 31.0, 90, 15.05], "centred");
	lookText(g, obj.text.toUpperCase(), "SansSemi", 14.175, 0.163, strong ? C_LABEL_HI : C_LABEL, [0, 78.6, 90, 14.2], "centred");
});

const var reverbKnobs = ["Knob3", "Knob4", "Knob5", "Knob6", "Knob7", "Knob8"];

for (k in reverbKnobs)
	Content.getComponent(k).setLocalLookAndFeel(lafReverb);

// ---- Input / Output / Dry/Wet ------------------------------------------------
inline function lookMini(g, obj, label, text, bipolar)
{
	local cx = 82.0;
	local cy = 20.0;
	local r = 15.0;
	local av = -ARC + 2.0 * ARC * obj.valueNormalized;
	local strong = obj.hover || obj.clicked;

	g.setColour(0x14FFFFFF);
	lookStrokePath(g, lookArc(cx, cy, r, -ARC, ARC), 1.6);
	lookValueArc(g, cx, cy, r, bipolar ? 0.0 : -ARC, av, 1.6, strong);

	g.setColour(C_TEXT);
	g.fillEllipse([cx + r * Math.sin(av) - 2.0, cy - r * Math.cos(av) - 2.0, 4.0, 4.0]);

	lookText(g, label, "SansSemi", 14.175, 0.163, strong ? C_LABEL_HI : C_LABEL, [0, 5.1, 58, 14.2], "right");
	lookText(g, text, "MonoMed", 14.52, 0.0, C_TEXT, [0, 19.4, 58, 14.52], "right");
}

const var lafIO = Content.createLocalLookAndFeel();

lafIO.registerFunction("drawRotarySlider", function(g, obj)
{
	if (obj.id == "DryWet")
		lookMini(g, obj, "DRY/WET", lookPercent(obj.value), false);
	else
		lookMini(g, obj, obj.text.toUpperCase(), lookDb(obj.value), true);
});

Content.getComponent("Input").setLocalLookAndFeel(lafIO);
Content.getComponent("Output").setLocalLookAndFeel(lafIO);
Content.getComponent("DryWet").setLocalLookAndFeel(lafIO);

// ---- Sensitivity -------------------------------------------------------------
const var lafSens = Content.createLocalLookAndFeel();

lafSens.registerFunction("drawLinearSlider", function(g, obj)
{
	var x0 = 6.0;
	var x1 = 236.0;
	var y = 30.0;
	var xv = x0 + (x1 - x0) * obj.valueNormalized;
	var strong = obj.hover || obj.clicked;

	var p = Content.createPath();
	p.startNewSubPath(x0, y);
	p.lineTo(x1, y);

	var shape = p.createStrokedPath(lookStroke(8.0), []);
	var b = shape.getBounds(1.0);

	g.setColour(C_GROOVE);
	g.fillPath(shape, b);
	g.drawInnerShadowFromPath(shape, b, 0xE6000000, 2, [0, 2]);
	g.drawInnerShadowFromPath(shape, b, 0x1AFFFFFF, 1, [0, -1]);

	if (xv - x0 > 0.5)
	{
		g.setGradientFill([strong ? 0x44762EFF : 0x28762EFF, x0, y, strong ? 0x442EFFE9 : 0x282EFFE9, x1, y]);
		g.fillRoundedRectangle([x0 - 3.5, y - 3.5, xv - x0 + 7.0, 7.0], 3.5);
		g.setGradientFill([C_PURPLE, x0, y, C_CYAN, x1, y]);
		g.fillRoundedRectangle([x0 - 1.5, y - 1.5, xv - x0 + 3.0, 3.0], 1.5);
	}

	g.setColour(0x552EFFE9);
	g.fillEllipse([xv - 4.6, y - 4.6, 9.2, 9.2]);
	g.setColour(C_TEXT);
	g.fillEllipse([xv - 2.6, y - 2.6, 5.2, 5.2]);

	lookText(g, "SENSITIVITY", "SansSemi", 13.5, 0.178, strong ? C_LABEL_HI : C_LABEL, [2, 4, 160, 13.5], "left");
	lookText(g, lookDb(obj.value), "MonoMed", 13.86, 0.0, C_TEXT, [80, 3.8, 160, 13.86], "right");
});

Content.getComponent("Sensitivity").setLocalLookAndFeel(lafSens);

// ---- Meter -----------------------------------------------------------------
const var GRMeter = Content.getComponent("GRMeter");
const var duckBuffer = Synth.getDisplayBufferSource("Script FX1").getDisplayBuffer(0);
duckBuffer.setActive(true);

GRMeter.data.shown = 0.0;

GRMeter.setPaintRoutine(function(g)
{
	var db = this.data.shown;
	var cx = 134.0;
	var cy = 146.0;
	var r = 76.0;
	var av = -ARC + 2.0 * ARC * Math.min(1.0, db / 24.0);

	g.setColour(0x1AFFC100);
	lookStrokePath(g, lookArc(cx, cy, r, -ARC, ARC), 2.5);

	if (db > 0.05)
	{
		g.setColour(0x4DFFC100);
		lookStrokePath(g, lookArc(cx, cy, r, -ARC, av), 6.0);
		g.setColour(C_GOLD);
		lookStrokePath(g, lookArc(cx, cy, r, -ARC, av), 2.5);
	}

	var t = db > 0.05 ? "GR -" + Engine.doubleToString(db, 1) + " dB" : "GR 0.0 dB";
	lookText(g, t, "MonoMed", 14.52, 0.0, C_GOLD, [120, 11.8, 136, 14.52], "right");
});

GRMeter.setTimerCallback(function()
{
	var rb = duckBuffer.getReadBuffer();
	var n = rb.length;
	var peak = 0.0;

	for (i = Math.max(0, n - 16); i < n; i++)
		peak = Math.max(peak, rb[i]);

	var db = -1.0 * Engine.getDecibelsForGainFactor(Math.max(1.0 - peak, 0.001));
	var shown = Math.max(db, this.data.shown - 1.0);

	if (Math.abs(shown - this.data.shown) > 0.05)
	{
		this.data.shown = shown;
		this.repaint();
	}
});

GRMeter.startTimer(40);

// ---- Zoom ------------------------------------------------------------------
const var ZoomPanel = Content.getComponent("ZoomPanel");
const var ZOOMS = [1.0, 1.25, 1.5];
const var ZOOM_TEXT = ["100%", "125%", "150%"];
const var ZOOM_X = [50, 104, 158];

ZoomPanel.data.hover = -1;

inline function zoomIndexAt(x, y)
{
	if (y < 0 || y > 24)
		return -1;

	if (x >= ZOOM_X[0] && x < ZOOM_X[0] + 48)
		return 0;

	if (x >= ZOOM_X[1] && x < ZOOM_X[1] + 48)
		return 1;

	if (x >= ZOOM_X[2] && x < ZOOM_X[2] + 48)
		return 2;

	return -1;
}

ZoomPanel.setPaintRoutine(function(g)
{
	var z = Settings.getZoomLevel();

	lookText(g, "ZOOM", "SansSemi", 14.175, 0.178, C_LABEL, [0, 4.9, 44, 14.2], "left");

	for (i = 0; i < 3; i++)
	{
		var area = [ZOOM_X[i], 1, 48, 22];
		var on = Math.abs(z - ZOOMS[i]) < 0.01;

		if (on)
		{
			var pill = Content.createPath();
			pill.addRoundedRectangle(area, 11);
			g.drawDropShadowFromPath(pill, area, 0x592EFFE9, 12, [0, 0]);
			g.setColour(0x142EFFE9);
			g.fillRoundedRectangle(area, 11);
			g.setColour(C_CYAN);
			g.drawRoundedRectangle([area[0] + 0.5, 1.5, 47, 21], 10.5, 1);
		}
		else
		{
			g.setColour(0x1FFFFFFF);
			g.drawRoundedRectangle([area[0] + 0.5, 1.5, 47, 21], 10.5, 1);
		}

		var c = on ? C_CYAN : (this.data.hover == i ? C_LABEL_HI : C_LABEL);
		lookText(g, ZOOM_TEXT[i], "MonoMed", 14.52, 0.0, c, [area[0], 4.74, 48, 14.52], "centred");
	}
});

ZoomPanel.setMouseCallback(function(event)
{
	var i = zoomIndexAt(event.x, event.y);
	var h = event.hover ? i : -1;

	if (event.clicked && i >= 0)
		Settings.setZoomLevel(ZOOMS[i]);

	if (h != this.data.hover || event.clicked)
	{
		this.data.hover = h;
		this.repaint();
	}
});

// ---- Website ---------------------------------------------------------------
inline function onButton1Control(component, value)
{
	Engine.openWebsite("www.sonicskunk.com");
};

Content.getComponent("Button1").setControlCallback(onButton1Control);

// ---- Help text -------------------------------------------------------------
namespace TooltipPanel
{
	const var Tooltip = Content.getComponent("Tooltip");

	Tooltip.data.text = "";

	Tooltip.setPaintRoutine(function(g)
	{
		g.setColour(C_LABEL);
		g.setFont("SansMed", 16.2);

		if (g.getStringWidth(this.data.text) > 296)
			g.drawMultiLineText(this.data.text, [0, 17], 296, "left", 0.0);
		else
			g.drawAlignedText(this.data.text, [0, 11.9, 296, 16.2], "left");
	});

	Tooltip.setTimerCallback(function()
	{
		var t = Content.getCurrentTooltip();

		if (t != this.data.text)
		{
			this.data.text = t;
			this.repaint();
		}
	});

	Tooltip.startTimer(250);
}

// Lottie Animation
const var lottieAnim = "3895.nT6K8C1UE0Vd.nGxfqgI.DoAwf3XkRtgPXU0EDYbxemsi9K7eKkTRYpSB5OLL5I++++u2Iv9AjZ.xE.hkU44gu5sS0J7ti54CsIyAmNmrPTZWryqughwnhS8ZaiyMRGBsqmnCmR1yre7b8UUWcEoaaZZKo7vRyjVExY1gvfprYKjZR8sJlx4+RpDbPgj4Na4yG8zku+bSdaxnb5oqFx+FS7SIFsxcrOU8llgNo1PAZ0UFY0OngFHmt2Q+ASehXyTibqpSxSK4U+bsEIV2sLaBo5wRguNKRECEm8+MNiPmH80U4e8h7edlREQPqyYgt5i1LoDg20YtWYggh48xCLRrxCdvgLwQDUvgwCWvAIHA8RFJnCKQl0zKLTTX04hH1P7PDNbHwCPLgJLwEz.F2XAnanHCVvDHgExfYnPDKgcoxFJHW07BGtXnviU+wPggYEyxEjFl33kkXhCYlwBM3GbXnngyrJO3XBGX3ANhCCEYvZ.EbvBGXfBQHwgghixnBU3BXfwvAGavDGFJLDS.CQ7vF3PENLTzvCLbvgDS7fDR3PDhfYHAQvgGT.iJXBEfwDO3.FPjANDgAXDAHbPALF.J7vD7vDH.FAvggCNr.HFIbXnnpL3vPwY3LxXoervggBwvAGWXBGFJ7Hm7aQjKadCGbDAEbXnHCGO.gEf3vvAGPXhHPgCCEGGGFJNpRcLN.BvPhGpvDPfGlvDSXgE3vvAGUvAFLbvgCS7fEbXn3PJV5vvAGXvAFhwp3IoH0pjrCYWOSpshdAQTyQFI+ToDol7MzbXQ+nJxMkqu4JgriCgt0cStASxnkiUaJYn39bwpbhEiG8irJ2VHiUc1j+p40T+daShDIUL+KGwjpqnNUmElqiIR33qrhlJ3H0ThXIQRa8Ok5noJTpedl7T6hgBEFJnqtl1TVzb1pHBuoFgxXYUzmJcsSkrypc2btgul8bUdWa5KSZMGah8FxFJpppmZtJkPM86TUGae5KhrOWui4KRzqcCEVF60rT0zwZQlTbxVEUaLi09LU730Isq2DYXeueoeA8xrZnaZVOi14wxyKRiNxnKwW8H0anG5joodgjWhxzaD0JMoFWtzjDgc7QcLWxzzawQGcjxZryMqT9R28Gyd2PQdSMxv9K8yzfODtvgMZHCGVPDVfBj.BGh.BJGjfnfDmMxEhXBiEFPXBR3BNDQBTgJLADvEYCElPhHRR4XE5rBDp.EHQEbfBhfDtvEXgHR.iEFOfQDVXBH7PDXb.EfAP.PXCILgCNPFd3BhXBHf0ckf2Ie5RSrgb+Uktjd0IQyDYymRVgUhcFBQy8vapoREXutrqFdwN1pGql2EsWb23rUVMmqj0e+pZi8rghgrpoIxFiR8YmcqxOU0HIqaUMW1HRI5VZys9it+N4RZtcU7wwNwRAs6kLQ9qp4YD07JptWaPpWjVyP0UI0qzkJeUFaBMmM2hprhkDNYo6tdmdMxG1+g5OK0Hr0MymM2IVUmYRPhvZVjZ3klVIZtrmbOd7VsYUFp+nTr8IuUzBMUqwcxpk8qQzgyUEmZbyg9qqnTzXnndIeYEilO4PqlLVqi9nMqFobL0Sp8aVJcSwWYkAGrlswpsI8HBqghyzr75740uVOqhVqope+hSr2eOKOTGqpycHpiItXddR2wrOF+srDkFQSYW5KrXVs7iRuSMu4kkopJtlaJOadk3ciJan.QBqdjbsqMn8W5k0aXcSoWZ50Y7zirAMo3Xn3xro3EUYmDaL5yjur4fUNEE2yW8lnbcNZ0td1RYpz3Q+Ck9V5rmK57TsYWk7wJWmVtnJdbUz+dHjloY..jgFnPDNzfqZtXC4qtSVseMKO4eMb5uesaauXlxnhnUVGQ5LKjhvCKUUFOxgTkeAemwrRlsoGl4sdo0ZLaY+QTJQtpfYsxU76G75Qo6U3X6lz0i+whnYihoyZhXccTY8kj0Fa0Gdakl6upkSGxe9UYj5rH8Ra0PypUsruZnf8twsvZIZSKLKhj76JdjqqZVY8x6kHLkrxEDsJSVYxVX9rCN02nipPjYTgUrPH8NzzqLgkHqvdwEWLdnJ9Ruyn5rls4JO0GrhgRNSeqbndS1ypZmtW53jjqkNqgSmr0qegF6M4iQiX+iuxuisbUNrF80glZp7RjLkaSIIR09BpnpxQLqxDIqkSo2hjvZm80xPweMaDUGRR05klRHY6oTZW9o9HgHpDCeG70SEypdiQkRjp7RtdOsuwiylnullyhhmDuUnclz42EeGN84qTClyqeUatWaJ9pdRdZdOKUWQ2mq24e+kPzEQVIw5U9EoJw9i34pdn4x6pDZApSGxTp1VZC.BCDPG.iNL.PfCFKRlfXTyFyAyHCjHKG.wTLDgXHFhPC.QP.D..Jg3BqqUg2hQIFDBmth4NzwgAaWCWY9YqxGB+3wJY9hcbnu5NR6pi3oQt6gatb8fKTbVONIO6wl83LibiHMmoc8WZeRT838RTXVD6PhT1v3SkK2nTSWT0zBfr8hJg+TwXXtpjvgRN9pIu8+YNNbI7uqo6Fb59D4v8kSCYpr6Z1TcvJvHIb.KvRYAWtHHey4ilMYIae0iMg+54brWiB40pN9GUx6VpiUN+jWQBnJtcAhQBKeGQ67ofCKGFUkNFF1a.DirJUtWPS37sG6gKynoFHU6boieFY7huGFkDJRSzBu2vg0f5rC3U3qmdsZ2IAaYvZBYWZgQLYnoxBCbCZmOwGJSvKqaEM37da.7ckHR4.JXL5XrFJRYS90c+ak7yUwsLHe0QhDJT1Vb7CbHQ494ZtlZmaX519994PrTmj..kPKI86OhWX8Awt3Lq316BdS1AylSTw.dTF3uM+FDE5SRaqpW+wZV9isahpS2XU7LQVUTlbFuZodZfjU7OLbA6o119zB3hzV6DCMlWqpKqtxdFaljpyR3sibNYFVfLn523wj7nGHFGsPVek6rOK0klXxsL2Kd5KHi1k9rnHQyAYUjOibhjm.JQGiVZpcJpK2IV9ErWrWA1h8y7yqi4P3DVSLYcLi8FSv4dlKIDxrqLV7XpyuHio9BkSR1PnAH+bYxkWJOdqbnSMP+CjeZjuQAKA0NBdri9v2ctHA1OOt4Rq5wzZPVD0v07QbtD8Loe28uvbNfYVK5RswmS.4zo+fty+9FE8w4HObqNeRU3KT1IdttY5cIPYlUWIfif7KzywHyJ+FrdQlrPMhywOlTHDX2v6sdwAnZVKyhHglHZ7uicfOhmOJVUE+oDCeRbrjMREHwF2lSgxCO9Q5ozP1U5fyhXOBTQ5icVHEVfFdERmVKz+SVh.iIDbsxNa+KChElNiq48n.Ms42jJZGq7K4v+FL1vIzaL7gJbihM.viqkabYzAhlGxze0y+hjdaabjcHX+CrC014A81dYPbjg7NPxQmm5yEI4pw8AsbcBuF0rIBofAhcOXkEtpx3RkUs.uYgQSjQAMT7gYnYA3CasZIIzrHmYkSx3Q+iSLkVknHPcq2Vsqqiaegdg.XjsVQZtn8yC+UNZy.94OiQG9Cp6uuMvd1zzRSqc7i39ZAbxSxGWGT0X15OEYxb2jUdpx5flc9w.vvPJBntqy4ib8oZFksAHADZlhPY1KghA3aQykaibd8SvxrczImzPg0jo0CUqTZsvWH02xJHwmirEoCKlSDBNfxSP0AC32IY+Df.cu.cJyvaiTPWr2efp6IQ5LW5SW+xHUTToqhkz5Q8IkmjnUHU9PHlftswdW3imExb3xi20SjRyTnjGEMyCg3Wd2HifemMvSSErSaFP.g0yKglQJQcvZ0qnVJg3oc2dzfz3AZkIT2umUthhgUclXmllfLtt4jkwXW3B6NLtiJquQO60GfmKc7jXsEaUrZbbISit5t1MTjW9CbXDrryTSsvqclCgygPpybhYqjWNFW2.vMxhvD4jE4dOxz2hi7OGbOcq0WgF.kO3ZMhNAPXG5qx63BchzK4xvBkQO4Ya5JAukguM7v9PLRQkTeA9C1nEOGYr1LxpqsSCEkFGXHO9EQha2JefRfQwG4rDfDMwEagSKCbOsMtuUabalRtHrLpEDSIZAdTp8KNJmf97YhcsW18w.E00D7vSGo6G8zC1ih9w4RIxgHr8fvf1SFgoa+xNGChEBoWLw78GuPuIV7dhw6IXJ5AIKCUw5u3eAjtMHOtd3pKUDRiIbP6ThfIDwbcm08rKmPjigWYfjch+PpCOalgqi.rBzrp1oClQQLb9s0fDUpd.Jm+cQn8XmJVicmQL5YHFmPzuhqZ4A.2L+yIxgHpv+wnv+4d69xELsfv2cByi.OdsUsfzN+8rEaDcxNnsLySChYIKGnkEn5P.n8VeBaCfP5mgYT3gYrnJaFRwxDU3PUvircdP.QiJK2ODsx8W7Xd.2tpHljG24KlHW3g5W9V0G6a2CRMk95ybrMTC9+xVwAkrpRXIseTZ1RtqaeAeAkY2tFlGnuEoSThrTrbhAL8A2WcKs3TRsUiErlZoj897cRSPWDA28BGU5Bz+fPmOCFWtYJDT+wIaiLqRoHv8yRb8CM3PNiRhN8TytyE4bMGi.W.tstvQprFb3RFjaEL.IpmRhaBBHgrs6PoVbLD3eCi1v0bFRD.2rQ0jArwCu2mxGSwJnIpZK0LjTWWgDvmiwAlSNjjK6E.5nw.qQEvjn9fZS+r9Xar+ReHUtSElIag8+TE.P.Mtu7Xf7Huijl58ZYNUCZGJiHMa0ot7yPUXrrda6whGlwMsZXB20Om40Uu07uiD4rpUcQ1rUvUIe67cbFkTNIGlt.7gDdU38A7E1+4iFNMZCodBKuCMNOR7lwJp8iUJKrxinOrlNhz2jUkO01f2ENwAd+sQgByMwp.yfnSZrVAhtemG8U5c7xexd2gbEliobOZyryvHikUyW0feQ9rnL7AyZ.RMfvlmI+Kx3dcpN8GI+6kO7j5jK5Ot6ohj0jwckuVuln5p9RPh7BFrUiT4PCb4EuhjhF414qSoperRbVa1JZgYRaLglNSE2fWp8YTEMdWEiEtOdWC691MuYlCroiNydU6Ep30QF4isAcc+Vguf6n8Mtg6OpAqVRO0Cv0jALU5dOz+6NsvVwvInlOMm7XEB.229dvhVc+0sQMdgZmP.WGFyilKlKrqEUvQUPzFYpQqFFDhdKNRsZTYXZqrH2Shel.RP5Q9ApyJ81k7NuBLNgjFV3rtvxx4BlUMmlQOQD1lgkjjqY7pX6C"

const var LottiePanel = Content.getComponent("LottiePanel");
LottiePanel.setAnimation(lottieAnim);
const var object = LottiePanel.getAnimationData();
LottiePanel.setTimerCallback(function()
{
    var nextFrame = (object.currentFrame + 1) % object.numFrames;

    this.setAnimationFrame(nextFrame);
});
LottiePanel.startTimer(1000.0 / object.frameRate);function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 