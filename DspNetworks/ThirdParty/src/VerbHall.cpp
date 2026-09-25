/* ------------------------------------------------------------
name: "VerbHall"
Code generated with Faust 2.74.6 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _VerbHall -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___VerbHall_H__
#define  ___VerbHall_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _VerbHall
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float _VerbHall_faustpower2_f(float value) {
	return value * value;
}

class _VerbHall final : public ::faust::dsp {
	
 public:
	
	int iRec10[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	FAUSTFLOAT fHslider1;
	float fConst3;
	float fRec11[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fRec13[2];
	float fRec12[2];
	int IOTA0;
	float fVec0[262144];
	FAUSTFLOAT fHslider4;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fRec22[3];
	float fConst16;
	float fVec1[1024];
	int iConst17;
	float fRec20[2];
	float fVec2[1024];
	int iConst18;
	float fRec18[2];
	float fVec3[4096];
	int iConst19;
	float fRec16[2];
	float fVec4[2048];
	int iConst20;
	float fRec14[2];
	float fVec5[32768];
	float fConst21;
	float fVec6[32768];
	float fConst22;
	float fRec8[2];
	float fRec26[2];
	float fRec25[2];
	float fVec7[262144];
	float fConst23;
	float fVec8[32768];
	float fConst24;
	float fRec23[2];
	float fRec30[2];
	float fRec29[2];
	float fVec9[262144];
	float fConst25;
	float fVec10[32768];
	float fConst26;
	float fRec27[2];
	float fRec34[2];
	float fRec33[2];
	float fVec11[262144];
	float fConst27;
	float fVec12[32768];
	float fConst28;
	float fRec31[2];
	float fConst29;
	float fRec38[2];
	float fRec37[2];
	float fVec13[262144];
	float fRec47[3];
	float fVec14[1024];
	int iConst30;
	float fRec45[2];
	float fVec15[1024];
	int iConst31;
	float fRec43[2];
	float fVec16[4096];
	int iConst32;
	float fRec41[2];
	float fVec17[2048];
	int iConst33;
	float fRec39[2];
	float fVec18[32768];
	float fVec19[32768];
	float fConst34;
	float fRec35[2];
	float fRec51[2];
	float fRec50[2];
	float fVec20[262144];
	float fConst35;
	float fVec21[32768];
	float fConst36;
	float fRec48[2];
	float fConst37;
	float fRec55[2];
	float fRec54[2];
	float fVec22[262144];
	float fVec23[32768];
	float fConst38;
	float fRec52[2];
	float fRec59[2];
	float fRec58[2];
	float fVec24[262144];
	float fConst39;
	float fVec25[32768];
	float fConst40;
	float fRec56[2];
	float fRec0[3];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	
 public:
	_VerbHall() {
	}
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.18.0");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _VerbHall -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("filename", "VerbHall.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("name", "VerbHall");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "1.5.0");
	}

	static constexpr int getStaticNumInputs() {
		return 2;
	}
	static constexpr int getStaticNumOutputs() {
		return 2;
	}
	int getNumInputs() {
		return 2;
	}
	int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 1.8221238f / fConst0;
		fConst2 = std::exp(-(3.3333333f / fConst0));
		fConst3 = 1.0f - fConst2;
		fConst4 = 0.45f * fConst0;
		fConst5 = 6.2831855f / fConst0;
		fConst6 = 1.0f / std::tan(628.31854f / fConst0);
		fConst7 = 1.0f - fConst6;
		fConst8 = 1.0f / (fConst6 + 1.0f);
		fConst9 = std::tan(188.49556f / fConst0);
		fConst10 = _VerbHall_faustpower2_f(fConst9);
		fConst11 = 2.0f * (1.0f - 1.0f / fConst10);
		fConst12 = 1.0f / fConst9;
		fConst13 = (fConst12 + -1.4142135f) / fConst9 + 1.0f;
		fConst14 = (fConst12 + 1.4142135f) / fConst9 + 1.0f;
		fConst15 = 1.0f / fConst14;
		fConst16 = 1.0f / (fConst10 * fConst14);
		iConst17 = std::min<int>(8192, std::max<int>(0, int(0.0047845803f * fConst0) + -1));
		iConst18 = std::min<int>(8192, std::max<int>(0, int(0.0035600907f * fConst0) + -1));
		iConst19 = std::min<int>(8192, std::max<int>(0, int(0.0127664395f * fConst0) + -1));
		iConst20 = std::min<int>(8192, std::max<int>(0, int(0.009274377f * fConst0) + -1));
		fConst21 = 0.02f * fConst0;
		fConst22 = 0.022904f * fConst0;
		fConst23 = 0.81681406f / fConst0;
		fConst24 = 0.020346f * fConst0;
		fConst25 = 1.1938052f / fConst0;
		fConst26 = 0.031604f * fConst0;
		fConst27 = 2.3247786f / fConst0;
		fConst28 = 0.013458f * fConst0;
		fConst29 = 1.0681415f / fConst0;
		iConst30 = std::min<int>(8192, std::max<int>(0, int(0.0050566895f * fConst0) + -1));
		iConst31 = std::min<int>(8192, std::max<int>(0, int(0.0037868482f * fConst0) + -1));
		iConst32 = std::min<int>(8192, std::max<int>(0, int(0.013310658f * fConst0) + -1));
		iConst33 = std::min<int>(8192, std::max<int>(0, int(0.009773242f * fConst0) + -1));
		fConst34 = 0.024421f * fConst0;
		fConst35 = 1.9477874f / fConst0;
		fConst36 = 0.029291f * fConst0;
		fConst37 = 1.4451326f / fConst0;
		fConst38 = 0.027333f * fConst0;
		fConst39 = 2.576106f / fConst0;
		fConst40 = 0.019123f * fConst0;
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.32f);
		fHslider1 = FAUSTFLOAT(0.32f);
		fHslider2 = FAUSTFLOAT(0.5f);
		fHslider3 = FAUSTFLOAT(0.3f);
		fHslider4 = FAUSTFLOAT(0.84f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iRec10[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec11[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec13[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec12[l3] = 0.0f;
		}
		IOTA0 = 0;
		for (int l4 = 0; l4 < 262144; l4 = l4 + 1) {
			fVec0[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec22[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 1024; l6 = l6 + 1) {
			fVec1[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec20[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 1024; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec18[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 4096; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec16[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2048; l12 = l12 + 1) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec14[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 32768; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 32768; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec8[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec26[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec25[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 262144; l19 = l19 + 1) {
			fVec7[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 32768; l20 = l20 + 1) {
			fVec8[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec23[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec30[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec29[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 262144; l24 = l24 + 1) {
			fVec9[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 32768; l25 = l25 + 1) {
			fVec10[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec27[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec34[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec33[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 262144; l29 = l29 + 1) {
			fVec11[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 32768; l30 = l30 + 1) {
			fVec12[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec31[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec38[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec37[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 262144; l34 = l34 + 1) {
			fVec13[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 3; l35 = l35 + 1) {
			fRec47[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 1024; l36 = l36 + 1) {
			fVec14[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec45[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 1024; l38 = l38 + 1) {
			fVec15[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec43[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 4096; l40 = l40 + 1) {
			fVec16[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec41[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2048; l42 = l42 + 1) {
			fVec17[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec39[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 32768; l44 = l44 + 1) {
			fVec18[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 32768; l45 = l45 + 1) {
			fVec19[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec35[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec51[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec50[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 262144; l49 = l49 + 1) {
			fVec20[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 32768; l50 = l50 + 1) {
			fVec21[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec48[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec55[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec54[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 262144; l54 = l54 + 1) {
			fVec22[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 32768; l55 = l55 + 1) {
			fVec23[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec52[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec59[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec58[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 262144; l59 = l59 + 1) {
			fVec24[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 32768; l60 = l60 + 1) {
			fVec25[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec56[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec0[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec1[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 3; l64 = l64 + 1) {
			fRec2[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fRec3[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 3; l66 = l66 + 1) {
			fRec4[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 3; l67 = l67 + 1) {
			fRec5[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec6[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 3; l69 = l69 + 1) {
			fRec7[l69] = 0.0f;
		}
	}
	
	void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	_VerbHall* clone() {
		return new _VerbHall();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VerbHall");
		ui_interface->addHorizontalSlider("Damping", &fHslider3, FAUSTFLOAT(0.3f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Decay", &fHslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Diffusion", &fHslider4, FAUSTFLOAT(0.84f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Modulation", &fHslider0, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Size", &fHslider1, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 0.0006f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = fConst3 * (1.25f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider1))) + 0.6f);
		float fSlow2 = 11.2f * std::pow(std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider2))), 2.353f) + 0.8f;
		float fSlow3 = 1.2068746f / fSlow2;
		float fSlow4 = std::cos(fConst5 * std::min<float>(1.6e+04f * std::pow(2.0f, -(4.5f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3))))), fConst4));
		float fSlow5 = 1.6091661f / fSlow2;
		float fSlow6 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider4)));
		float fSlow7 = std::min<float>(0.7f, 0.74404764f * fSlow6);
		float fSlow8 = std::min<float>(0.8f, 0.89285713f * fSlow6);
		float fSlow9 = 1.0577776f / fSlow2;
		float fSlow10 = 1.4103702f / fSlow2;
		float fSlow11 = 0.8830667f / fSlow2;
		float fSlow12 = 1.1774223f / fSlow2;
		float fSlow13 = 0.8634694f / fSlow2;
		float fSlow14 = 1.1512926f / fSlow2;
		float fSlow15 = 1.4533157f / fSlow2;
		float fSlow16 = 1.9377543f / fSlow2;
		float fSlow17 = 1.328382f / fSlow2;
		float fSlow18 = 1.7711761f / fSlow2;
		float fSlow19 = 1.7745402f / fSlow2;
		float fSlow20 = 2.3660536f / fSlow2;
		float fSlow21 = 1.519644f / fSlow2;
		float fSlow22 = 2.026192f / fSlow2;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iRec10[0] = iRec10[1] + 1;
			float fTemp0 = float(iRec10[0] + -1);
			fRec11[0] = fSlow1 + fConst2 * fRec11[1];
			float fTemp1 = fConst0 * (0.151809f * fRec11[0] + fSlow0 * (std::sin(fConst1 * fTemp0 + 2.8f) + 1.0f));
			float fTemp2 = std::floor(fTemp1);
			float fTemp3 = std::exp(-(fSlow3 * fRec11[0]));
			float fTemp4 = _VerbHall_faustpower2_f(fTemp3);
			float fTemp5 = 1.0f - fTemp4;
			float fTemp6 = 1.0f - fSlow4 * fTemp4;
			float fTemp7 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp6) / _VerbHall_faustpower2_f(fTemp5) + -1.0f));
			float fTemp8 = fTemp6 / fTemp5;
			fRec13[0] = fConst8 * (fRec4[1] + fRec4[2] - fConst7 * fRec13[1]);
			fRec12[0] = fTemp3 * (fTemp7 + (1.0f - fTemp8)) * (fRec4[1] + fRec13[0] * (std::exp(-(fSlow5 * fRec11[0])) / fTemp3 + -1.0f)) + (fTemp8 - fTemp7) * fRec12[1];
			float fTemp9 = 0.35355338f * fRec12[0] + 1e-20f;
			fVec0[IOTA0 & 262143] = fTemp9;
			int iTemp10 = int(fTemp1);
			fRec22[0] = float(input0[i0]) - fConst15 * (fConst13 * fRec22[2] + fConst11 * fRec22[1]);
			float fTemp11 = fSlow8 * fRec20[1] + fConst16 * (fRec22[2] + (fRec22[0] - 2.0f * fRec22[1]));
			fVec1[IOTA0 & 1023] = fTemp11;
			fRec20[0] = fVec1[(IOTA0 - iConst17) & 1023];
			float fRec21 = -(fSlow8 * fTemp11);
			float fTemp12 = fRec20[1] + fRec21 + fSlow8 * fRec18[1];
			fVec2[IOTA0 & 1023] = fTemp12;
			fRec18[0] = fVec2[(IOTA0 - iConst18) & 1023];
			float fRec19 = -(fSlow8 * fTemp12);
			float fTemp13 = fSlow7 * fRec16[1] + fRec19 + fRec18[1];
			fVec3[IOTA0 & 4095] = fTemp13;
			fRec16[0] = fVec3[(IOTA0 - iConst19) & 4095];
			float fRec17 = -(fSlow7 * fTemp13);
			float fTemp14 = fRec16[1] + fRec17 + fSlow7 * fRec14[1];
			fVec4[IOTA0 & 2047] = fTemp14;
			fRec14[0] = fVec4[(IOTA0 - iConst20) & 2047];
			float fRec15 = -(fSlow7 * fTemp14);
			float fTemp15 = fRec15 + fRec14[1];
			fVec5[IOTA0 & 32767] = fTemp15;
			float fTemp16 = fConst21 * fRec11[0];
			int iTemp17 = int(fTemp16);
			int iTemp18 = std::min<int>(16385, std::max<int>(0, iTemp17 + 1));
			float fTemp19 = std::floor(fTemp16);
			float fTemp20 = fTemp16 - fTemp19;
			float fTemp21 = fTemp19 + (1.0f - fTemp16);
			int iTemp22 = std::min<int>(16385, std::max<int>(0, iTemp17));
			float fTemp23 = 0.3f * (fVec5[(IOTA0 - iTemp22) & 32767] * fTemp21 + fTemp20 * fVec5[(IOTA0 - iTemp18) & 32767]);
			float fTemp24 = (fTemp1 - fTemp2) * fVec0[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp10 + 1))) & 262143] + fTemp23 + fVec0[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp10))) & 262143] * (fTemp2 + (1.0f - fTemp1)) - 0.6f * fRec8[1];
			fVec6[IOTA0 & 32767] = fTemp24;
			float fTemp25 = fConst22 * fRec11[0];
			float fTemp26 = fTemp25 + -1.0f;
			int iTemp27 = int(fTemp26);
			float fTemp28 = std::floor(fTemp26);
			fRec8[0] = fVec6[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp27))) & 32767] * (fTemp28 + (2.0f - fTemp25)) + (fTemp25 + (-1.0f - fTemp28)) * fVec6[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp27 + 1))) & 32767];
			float fRec9 = 0.6f * fTemp24;
			float fTemp29 = std::exp(-(fSlow9 * fRec11[0]));
			float fTemp30 = _VerbHall_faustpower2_f(fTemp29);
			float fTemp31 = 1.0f - fTemp30;
			float fTemp32 = 1.0f - fSlow4 * fTemp30;
			float fTemp33 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp32) / _VerbHall_faustpower2_f(fTemp31) + -1.0f));
			float fTemp34 = fTemp32 / fTemp31;
			fRec26[0] = fConst8 * (fRec0[1] + fRec0[2] - fConst7 * fRec26[1]);
			fRec25[0] = fTemp29 * (fTemp33 + (1.0f - fTemp34)) * (fRec0[1] + fRec26[0] * (std::exp(-(fSlow10 * fRec11[0])) / fTemp29 + -1.0f)) + (fTemp34 - fTemp33) * fRec25[1];
			float fTemp35 = 0.35355338f * fRec25[0] + 1e-20f;
			fVec7[IOTA0 & 262143] = fTemp35;
			float fTemp36 = fConst0 * (0.132783f * fRec11[0] + fSlow0 * (std::sin(fConst23 * fTemp0) + 1.0f));
			int iTemp37 = int(fTemp36);
			float fTemp38 = std::floor(fTemp36);
			float fTemp39 = fVec7[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp37))) & 262143] * (fTemp38 + (1.0f - fTemp36)) + (fTemp36 - fTemp38) * fVec7[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp37 + 1))) & 262143] + fTemp23 - 0.6f * fRec23[1];
			fVec8[IOTA0 & 32767] = fTemp39;
			float fTemp40 = fConst24 * fRec11[0];
			float fTemp41 = fTemp40 + -1.0f;
			int iTemp42 = int(fTemp41);
			float fTemp43 = std::floor(fTemp41);
			fRec23[0] = fVec8[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp42))) & 32767] * (fTemp43 + (2.0f - fTemp40)) + (fTemp40 + (-1.0f - fTemp43)) * fVec8[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp42 + 1))) & 32767];
			float fRec24 = 0.6f * fTemp39;
			float fTemp44 = fRec24 + fRec9;
			float fTemp45 = std::exp(-(fSlow11 * fRec11[0]));
			float fTemp46 = _VerbHall_faustpower2_f(fTemp45);
			float fTemp47 = 1.0f - fTemp46;
			float fTemp48 = 1.0f - fSlow4 * fTemp46;
			float fTemp49 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp48) / _VerbHall_faustpower2_f(fTemp47) + -1.0f));
			float fTemp50 = fTemp48 / fTemp47;
			fRec30[0] = -(fConst8 * (fConst7 * fRec30[1] - (fRec2[1] + fRec2[2])));
			fRec29[0] = fTemp45 * (fTemp49 + (1.0f - fTemp50)) * (fRec2[1] + fRec30[0] * (std::exp(-(fSlow12 * fRec11[0])) / fTemp45 + -1.0f)) + (fTemp50 - fTemp49) * fRec29[1];
			float fTemp51 = 0.35355338f * fRec29[0] + 1e-20f;
			fVec9[IOTA0 & 262143] = fTemp51;
			float fTemp52 = fConst0 * (0.096233f * fRec11[0] + fSlow0 * (std::sin(fConst25 * fTemp0 + 1.4f) + 1.0f));
			int iTemp53 = int(fTemp52);
			float fTemp54 = std::floor(fTemp52);
			float fTemp55 = fVec9[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp53))) & 262143] * (fTemp54 + (1.0f - fTemp52)) + (fTemp52 - fTemp54) * fVec9[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp53 + 1))) & 262143] - (fTemp23 + 0.6f * fRec27[1]);
			fVec10[IOTA0 & 32767] = fTemp55;
			float fTemp56 = fConst26 * fRec11[0];
			float fTemp57 = fTemp56 + -1.0f;
			int iTemp58 = int(fTemp57);
			float fTemp59 = std::floor(fTemp57);
			fRec27[0] = fVec10[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp58))) & 32767] * (fTemp59 + (2.0f - fTemp56)) + (fTemp56 + (-1.0f - fTemp59)) * fVec10[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp58 + 1))) & 32767];
			float fRec28 = 0.6f * fTemp55;
			float fTemp60 = std::exp(-(fSlow13 * fRec11[0]));
			float fTemp61 = _VerbHall_faustpower2_f(fTemp60);
			float fTemp62 = 1.0f - fTemp61;
			float fTemp63 = 1.0f - fSlow4 * fTemp61;
			float fTemp64 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp63) / _VerbHall_faustpower2_f(fTemp62) + -1.0f));
			float fTemp65 = fTemp63 / fTemp62;
			fRec34[0] = -(fConst8 * (fConst7 * fRec34[1] - (fRec6[1] + fRec6[2])));
			fRec33[0] = fTemp60 * (fTemp64 + (1.0f - fTemp65)) * (fRec6[1] + fRec34[0] * (std::exp(-(fSlow14 * fRec11[0])) / fTemp60 + -1.0f)) + (fTemp65 - fTemp64) * fRec33[1];
			float fTemp66 = 0.35355338f * fRec33[0] + 1e-20f;
			fVec11[IOTA0 & 262143] = fTemp66;
			float fTemp67 = fConst0 * (0.111542f * fRec11[0] + fSlow0 * (std::sin(fConst27 * fTemp0 + 4.2f) + 1.0f));
			int iTemp68 = int(fTemp67);
			float fTemp69 = std::floor(fTemp67);
			float fTemp70 = fVec11[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp68))) & 262143] * (fTemp69 + (1.0f - fTemp67)) + (fTemp67 - fTemp69) * fVec11[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp68 + 1))) & 262143] - (fTemp23 + 0.6f * fRec31[1]);
			fVec12[IOTA0 & 32767] = fTemp70;
			float fTemp71 = fConst28 * fRec11[0];
			float fTemp72 = fTemp71 + -1.0f;
			int iTemp73 = int(fTemp72);
			float fTemp74 = std::floor(fTemp72);
			fRec31[0] = fVec12[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp73))) & 32767] * (fTemp74 + (2.0f - fTemp71)) + (fTemp71 + (-1.0f - fTemp74)) * fVec12[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp73 + 1))) & 32767];
			float fRec32 = 0.6f * fTemp70;
			float fTemp75 = fRec32 + fRec28 + fTemp44;
			float fTemp76 = fConst0 * (0.185968f * fRec11[0] + fSlow0 * (std::sin(fConst29 * fTemp0 + 0.7f) + 1.0f));
			float fTemp77 = std::floor(fTemp76);
			float fTemp78 = std::exp(-(fSlow15 * fRec11[0]));
			float fTemp79 = _VerbHall_faustpower2_f(fTemp78);
			float fTemp80 = 1.0f - fTemp79;
			float fTemp81 = 1.0f - fSlow4 * fTemp79;
			float fTemp82 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp81) / _VerbHall_faustpower2_f(fTemp80) + -1.0f));
			float fTemp83 = fTemp81 / fTemp80;
			fRec38[0] = fConst8 * (fRec1[1] + fRec1[2] - fConst7 * fRec38[1]);
			fRec37[0] = fTemp78 * (fTemp82 + (1.0f - fTemp83)) * (fRec1[1] + fRec38[0] * (std::exp(-(fSlow16 * fRec11[0])) / fTemp78 + -1.0f)) + (fTemp83 - fTemp82) * fRec37[1];
			float fTemp84 = 0.35355338f * fRec37[0] + 1e-20f;
			fVec13[IOTA0 & 262143] = fTemp84;
			int iTemp85 = int(fTemp76);
			fRec47[0] = float(input1[i0]) - fConst15 * (fConst13 * fRec47[2] + fConst11 * fRec47[1]);
			float fTemp86 = fSlow8 * fRec45[1] + fConst16 * (fRec47[2] + (fRec47[0] - 2.0f * fRec47[1]));
			fVec14[IOTA0 & 1023] = fTemp86;
			fRec45[0] = fVec14[(IOTA0 - iConst30) & 1023];
			float fRec46 = -(fSlow8 * fTemp86);
			float fTemp87 = fRec45[1] + fRec46 + fSlow8 * fRec43[1];
			fVec15[IOTA0 & 1023] = fTemp87;
			fRec43[0] = fVec15[(IOTA0 - iConst31) & 1023];
			float fRec44 = -(fSlow8 * fTemp87);
			float fTemp88 = fSlow7 * fRec41[1] + fRec44 + fRec43[1];
			fVec16[IOTA0 & 4095] = fTemp88;
			fRec41[0] = fVec16[(IOTA0 - iConst32) & 4095];
			float fRec42 = -(fSlow7 * fTemp88);
			float fTemp89 = fRec41[1] + fRec42 + fSlow7 * fRec39[1];
			fVec17[IOTA0 & 2047] = fTemp89;
			fRec39[0] = fVec17[(IOTA0 - iConst33) & 2047];
			float fRec40 = -(fSlow7 * fTemp89);
			float fTemp90 = fRec40 + fRec39[1];
			fVec18[IOTA0 & 32767] = fTemp90;
			float fTemp91 = 0.3f * (fTemp21 * fVec18[(IOTA0 - iTemp22) & 32767] + fTemp20 * fVec18[(IOTA0 - iTemp18) & 32767]);
			float fTemp92 = fTemp91 + (fTemp76 - fTemp77) * fVec13[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp85 + 1))) & 262143] + 0.6f * fRec35[1] + fVec13[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp85))) & 262143] * (fTemp77 + (1.0f - fTemp76));
			fVec19[IOTA0 & 32767] = fTemp92;
			float fTemp93 = fConst34 * fRec11[0];
			float fTemp94 = fTemp93 + -1.0f;
			int iTemp95 = int(fTemp94);
			float fTemp96 = std::floor(fTemp94);
			fRec35[0] = fVec19[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp95))) & 32767] * (fTemp96 + (2.0f - fTemp93)) + (fTemp93 + (-1.0f - fTemp96)) * fVec19[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp95 + 1))) & 32767];
			float fRec36 = -(0.6f * fTemp92);
			float fTemp97 = std::exp(-(fSlow17 * fRec11[0]));
			float fTemp98 = _VerbHall_faustpower2_f(fTemp97);
			float fTemp99 = 1.0f - fTemp98;
			float fTemp100 = 1.0f - fSlow4 * fTemp98;
			float fTemp101 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp100) / _VerbHall_faustpower2_f(fTemp99) + -1.0f));
			float fTemp102 = fTemp100 / fTemp99;
			fRec51[0] = -(fConst8 * (fConst7 * fRec51[1] - (fRec5[1] + fRec5[2])));
			fRec50[0] = fTemp97 * (fTemp101 + (1.0f - fTemp102)) * (fRec5[1] + fRec51[0] * (std::exp(-(fSlow18 * fRec11[0])) / fTemp97 + -1.0f)) + (fTemp102 - fTemp101) * fRec50[1];
			float fTemp103 = 0.35355338f * fRec50[0] + 1e-20f;
			fVec20[IOTA0 & 262143] = fTemp103;
			float fTemp104 = fConst0 * (0.163012f * fRec11[0] + fSlow0 * (std::sin(fConst35 * fTemp0 + 3.5f) + 1.0f));
			int iTemp105 = int(fTemp104);
			float fTemp106 = std::floor(fTemp104);
			float fTemp107 = fVec20[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp105))) & 262143] * (fTemp106 + (1.0f - fTemp104)) + (fTemp104 - fTemp106) * fVec20[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp105 + 1))) & 262143] + fTemp91 + 0.6f * fRec48[1];
			fVec21[IOTA0 & 32767] = fTemp107;
			float fTemp108 = fConst36 * fRec11[0];
			float fTemp109 = fTemp108 + -1.0f;
			int iTemp110 = int(fTemp109);
			float fTemp111 = std::floor(fTemp109);
			fRec48[0] = fVec21[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp110))) & 32767] * (fTemp111 + (2.0f - fTemp108)) + (fTemp108 + (-1.0f - fTemp111)) * fVec21[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp110 + 1))) & 32767];
			float fRec49 = -(0.6f * fTemp107);
			float fTemp112 = fConst0 * (0.229558f * fRec11[0] + fSlow0 * (std::sin(fConst37 * fTemp0 + 2.1f) + 1.0f));
			float fTemp113 = std::floor(fTemp112);
			float fTemp114 = std::exp(-(fSlow19 * fRec11[0]));
			float fTemp115 = _VerbHall_faustpower2_f(fTemp114);
			float fTemp116 = 1.0f - fTemp115;
			float fTemp117 = 1.0f - fSlow4 * fTemp115;
			float fTemp118 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp117) / _VerbHall_faustpower2_f(fTemp116) + -1.0f));
			float fTemp119 = fTemp117 / fTemp116;
			fRec55[0] = fConst8 * (fRec3[1] + fRec3[2] - fConst7 * fRec55[1]);
			fRec54[0] = fTemp114 * (fTemp118 + (1.0f - fTemp119)) * (fRec3[1] + fRec55[0] * (std::exp(-(fSlow20 * fRec11[0])) / fTemp114 + -1.0f)) + (fTemp119 - fTemp118) * fRec54[1];
			float fTemp120 = 0.35355338f * fRec54[0] + 1e-20f;
			fVec22[IOTA0 & 262143] = fTemp120;
			int iTemp121 = int(fTemp112);
			float fTemp122 = (fTemp112 - fTemp113) * fVec22[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp121 + 1))) & 262143] + 0.6f * fRec52[1] + fVec22[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp121))) & 262143] * (fTemp113 + (1.0f - fTemp112));
			float fTemp123 = fTemp122 - fTemp91;
			fVec23[IOTA0 & 32767] = fTemp123;
			float fTemp124 = fConst38 * fRec11[0];
			float fTemp125 = fTemp124 + -1.0f;
			int iTemp126 = int(fTemp125);
			float fTemp127 = std::floor(fTemp125);
			fRec52[0] = fVec23[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp126))) & 32767] * (fTemp127 + (2.0f - fTemp124)) + (fTemp124 + (-1.0f - fTemp127)) * fVec23[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp126 + 1))) & 32767];
			float fRec53 = 0.6f * (fTemp91 - fTemp122);
			float fTemp128 = std::exp(-(fSlow21 * fRec11[0]));
			float fTemp129 = _VerbHall_faustpower2_f(fTemp128);
			float fTemp130 = 1.0f - fTemp129;
			float fTemp131 = 1.0f - fSlow4 * fTemp129;
			float fTemp132 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp131) / _VerbHall_faustpower2_f(fTemp130) + -1.0f));
			float fTemp133 = fTemp131 / fTemp130;
			fRec59[0] = -(fConst8 * (fConst7 * fRec59[1] - (fRec7[1] + fRec7[2])));
			fRec58[0] = fTemp128 * (fTemp132 + (1.0f - fTemp133)) * (fRec7[1] + fRec59[0] * (std::exp(-(fSlow22 * fRec11[0])) / fTemp128 + -1.0f)) + (fTemp133 - fTemp132) * fRec58[1];
			float fTemp134 = 0.35355338f * fRec58[0] + 1e-20f;
			fVec24[IOTA0 & 262143] = fTemp134;
			float fTemp135 = fConst0 * (0.200868f * fRec11[0] + fSlow0 * (std::sin(fConst39 * fTemp0 + 4.9f) + 1.0f));
			int iTemp136 = int(fTemp135);
			float fTemp137 = std::floor(fTemp135);
			float fTemp138 = fVec24[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp136))) & 262143] * (fTemp137 + (1.0f - fTemp135)) + 0.6f * fRec56[1] + (fTemp135 - fTemp137) * fVec24[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp136 + 1))) & 262143];
			float fTemp139 = fTemp138 - fTemp91;
			fVec25[IOTA0 & 32767] = fTemp139;
			float fTemp140 = fConst40 * fRec11[0];
			float fTemp141 = fTemp140 + -1.0f;
			int iTemp142 = int(fTemp141);
			float fTemp143 = std::floor(fTemp141);
			fRec56[0] = fVec25[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp142))) & 32767] * (fTemp143 + (2.0f - fTemp140)) + (fTemp140 + (-1.0f - fTemp143)) * fVec25[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp142 + 1))) & 32767];
			float fRec57 = 0.6f * (fTemp91 - fTemp138);
			fRec0[0] = fRec52[1] + fRec48[1] + fRec35[1] + fRec56[1] + fRec27[1] + fRec8[1] + fRec23[1] + fRec31[1] + fRec57 + fRec53 + fRec49 + fRec36 + fTemp75;
			fRec1[0] = fRec27[1] + fRec8[1] + fRec23[1] + fRec31[1] + fTemp75 - (fRec52[1] + fRec48[1] + fRec35[1] + fRec56[1] + fRec57 + fRec53 + fRec36 + fRec49);
			float fTemp144 = fRec28 + fRec32;
			fRec2[0] = fRec48[1] + fRec35[1] + fRec8[1] + fRec23[1] + fRec49 + fRec36 + fTemp44 - (fRec52[1] + fRec56[1] + fRec27[1] + fRec31[1] + fRec57 + fRec53 + fTemp144);
			fRec3[0] = fRec52[1] + fRec56[1] + fRec8[1] + fRec23[1] + fRec57 + fRec53 + fTemp44 - (fRec48[1] + fRec35[1] + fRec27[1] + fRec31[1] + fRec49 + fRec36 + fTemp144);
			float fTemp145 = fRec9 + fRec32;
			float fTemp146 = fRec24 + fRec28;
			fRec4[0] = fRec52[1] + fRec35[1] + fRec27[1] + fRec23[1] + fRec53 + fRec36 + fTemp146 - (fRec48[1] + fRec56[1] + fRec8[1] + fRec31[1] + fRec57 + fRec49 + fTemp145);
			fRec5[0] = fRec48[1] + fRec56[1] + fRec27[1] + fRec23[1] + fRec57 + fRec49 + fTemp146 - (fRec52[1] + fRec35[1] + fRec8[1] + fRec31[1] + fRec53 + fRec36 + fTemp145);
			float fTemp147 = fRec9 + fRec28;
			float fTemp148 = fRec24 + fRec32;
			fRec6[0] = fRec35[1] + fRec56[1] + fRec23[1] + fRec31[1] + fRec57 + fRec36 + fTemp148 - (fRec52[1] + fRec48[1] + fRec27[1] + fRec8[1] + fRec53 + fRec49 + fTemp147);
			fRec7[0] = fRec52[1] + fRec48[1] + fRec23[1] + fRec31[1] + fRec53 + fRec49 + fTemp148 - (fRec35[1] + fRec56[1] + fRec27[1] + fRec8[1] + fRec57 + fRec36 + fTemp147);
			output0[i0] = FAUSTFLOAT(0.73f * (fRec1[0] + fRec2[0]));
			output1[i0] = FAUSTFLOAT(0.73f * (fRec1[0] - fRec2[0]));
			iRec10[1] = iRec10[0];
			fRec11[1] = fRec11[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			IOTA0 = IOTA0 + 1;
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec20[1] = fRec20[0];
			fRec18[1] = fRec18[0];
			fRec16[1] = fRec16[0];
			fRec14[1] = fRec14[0];
			fRec8[1] = fRec8[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			fRec23[1] = fRec23[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec27[1] = fRec27[0];
			fRec34[1] = fRec34[0];
			fRec33[1] = fRec33[0];
			fRec31[1] = fRec31[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fRec45[1] = fRec45[0];
			fRec43[1] = fRec43[0];
			fRec41[1] = fRec41[0];
			fRec39[1] = fRec39[0];
			fRec35[1] = fRec35[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fRec48[1] = fRec48[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fRec52[1] = fRec52[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fRec56[1] = fRec56[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "VerbHall.dsp"
	#define FAUST_CLASS_NAME "_VerbHall"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _VerbHall -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 5
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("Damping", fHslider3, 0.3f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Decay", fHslider2, 0.5f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Diffusion", fHslider4, 0.84f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Modulation", fHslider0, 0.32f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Size", fHslider1, 0.32f, 0.0f, 1.0f, 0.001f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Damping, "Damping", fHslider3, 0.3f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Decay, "Decay", fHslider2, 0.5f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Diffusion, "Diffusion", fHslider4, 0.84f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Modulation, "Modulation", fHslider0, 0.32f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Size, "Size", fHslider1, 0.32f, 0.0f, 1.0f, 0.001f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
