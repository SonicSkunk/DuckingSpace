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
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec0[2];
	float fConst2;
	float fConst3;
	FAUSTFLOAT fHslider0;
	float fRec1[2];
	FAUSTFLOAT fHslider1;
	float fRec12[2];
	float fConst4;
	float fRec13[2];
	float fRec14[2];
	float fConst5;
	FAUSTFLOAT fHslider2;
	float fConst6;
	float fRec15[2];
	float fConst7;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fRec17[2];
	float fRec16[2];
	int IOTA0;
	float fVec0[262144];
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fRec26[3];
	float fConst20;
	float fVec1[1024];
	int iConst21;
	float fRec24[2];
	float fVec2[1024];
	int iConst22;
	float fRec22[2];
	float fVec3[4096];
	int iConst23;
	float fRec20[2];
	float fVec4[2048];
	int iConst24;
	float fRec18[2];
	float fVec5[32768];
	float fConst25;
	float fVec6[32768];
	float fConst26;
	float fRec10[2];
	float fRec30[2];
	float fRec29[2];
	float fVec7[262144];
	float fConst27;
	float fRec31[2];
	float fConst28;
	float fVec8[32768];
	float fConst29;
	float fRec27[2];
	float fRec35[2];
	float fRec34[2];
	float fVec9[262144];
	float fConst30;
	float fRec36[2];
	float fConst31;
	float fVec10[32768];
	float fConst32;
	float fRec32[2];
	float fRec40[2];
	float fRec39[2];
	float fVec11[262144];
	float fConst33;
	float fRec41[2];
	float fConst34;
	float fVec12[32768];
	float fConst35;
	float fRec37[2];
	float fConst36;
	float fRec44[2];
	float fConst37;
	float fRec46[2];
	float fRec45[2];
	float fVec13[262144];
	float fRec55[3];
	float fVec14[1024];
	int iConst38;
	float fRec53[2];
	float fVec15[1024];
	int iConst39;
	float fRec51[2];
	float fVec16[4096];
	int iConst40;
	float fRec49[2];
	float fVec17[2048];
	int iConst41;
	float fRec47[2];
	float fVec18[32768];
	float fVec19[32768];
	float fConst42;
	float fRec42[2];
	float fConst43;
	float fRec58[2];
	float fConst44;
	float fRec60[2];
	float fRec59[2];
	float fVec20[262144];
	float fVec21[32768];
	float fConst45;
	float fRec56[2];
	float fRec64[2];
	float fRec63[2];
	float fVec22[262144];
	float fConst46;
	float fRec65[2];
	float fConst47;
	float fVec23[32768];
	float fConst48;
	float fRec61[2];
	float fConst49;
	float fRec68[2];
	float fConst50;
	float fRec70[2];
	float fRec69[2];
	float fVec24[262144];
	float fVec25[32768];
	float fConst51;
	float fRec66[2];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	float fRec8[3];
	float fRec9[3];
	float fVec26[8192];
	float fConst52;
	float fRec71[2];
	float fVec27[8192];
	
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
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
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
		fConst1 = 0.83f / fConst0;
		fConst2 = 44.1f / fConst0;
		fConst3 = 1.0f - fConst2;
		fConst4 = 1.17f / fConst0;
		fConst5 = std::exp(-(3.3333333f / fConst0));
		fConst6 = 1.0f - fConst5;
		fConst7 = 0.151809f * fConst0;
		fConst8 = 0.45f * fConst0;
		fConst9 = 6.2831855f / fConst0;
		fConst10 = 1.0f / std::tan(628.31854f / fConst0);
		fConst11 = 1.0f - fConst10;
		fConst12 = 1.0f / (fConst10 + 1.0f);
		fConst13 = std::tan(188.49556f / fConst0);
		fConst14 = _VerbHall_faustpower2_f(fConst13);
		fConst15 = 2.0f * (1.0f - 1.0f / fConst14);
		fConst16 = 1.0f / fConst13;
		fConst17 = (fConst16 + -1.4142135f) / fConst13 + 1.0f;
		fConst18 = (fConst16 + 1.4142135f) / fConst13 + 1.0f;
		fConst19 = 1.0f / fConst18;
		fConst20 = 1.0f / (fConst14 * fConst18);
		iConst21 = std::min<int>(8192, std::max<int>(0, int(0.0047845803f * fConst0) + -1));
		iConst22 = std::min<int>(8192, std::max<int>(0, int(0.0035600907f * fConst0) + -1));
		iConst23 = std::min<int>(8192, std::max<int>(0, int(0.0127664395f * fConst0) + -1));
		iConst24 = std::min<int>(8192, std::max<int>(0, int(0.009274377f * fConst0) + -1));
		fConst25 = 0.02f * fConst0;
		fConst26 = 0.022904f * fConst0;
		fConst27 = 0.61f / fConst0;
		fConst28 = 0.132783f * fConst0;
		fConst29 = 0.020346f * fConst0;
		fConst30 = 0.89f / fConst0;
		fConst31 = 0.096233f * fConst0;
		fConst32 = 0.031604f * fConst0;
		fConst33 = 1.47f / fConst0;
		fConst34 = 0.111542f * fConst0;
		fConst35 = 0.013458f * fConst0;
		fConst36 = 0.73f / fConst0;
		fConst37 = 0.185968f * fConst0;
		iConst38 = std::min<int>(8192, std::max<int>(0, int(0.0050566895f * fConst0) + -1));
		iConst39 = std::min<int>(8192, std::max<int>(0, int(0.0037868482f * fConst0) + -1));
		iConst40 = std::min<int>(8192, std::max<int>(0, int(0.013310658f * fConst0) + -1));
		iConst41 = std::min<int>(8192, std::max<int>(0, int(0.009773242f * fConst0) + -1));
		fConst42 = 0.024421f * fConst0;
		fConst43 = 1.31f / fConst0;
		fConst44 = 0.163012f * fConst0;
		fConst45 = 0.029291f * fConst0;
		fConst46 = 1.03f / fConst0;
		fConst47 = 0.229558f * fConst0;
		fConst48 = 0.027333f * fConst0;
		fConst49 = 1.59f / fConst0;
		fConst50 = 0.200868f * fConst0;
		fConst51 = 0.019123f * fConst0;
		fConst52 = 0.55f / fConst0;
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.32f);
		fHslider1 = FAUSTFLOAT(0.84f);
		fHslider2 = FAUSTFLOAT(0.32f);
		fHslider3 = FAUSTFLOAT(0.5f);
		fHslider4 = FAUSTFLOAT(0.3f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec1[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec12[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec13[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec14[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec15[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec17[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec16[l7] = 0.0f;
		}
		IOTA0 = 0;
		for (int l8 = 0; l8 < 262144; l8 = l8 + 1) {
			fVec0[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fRec26[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 1024; l10 = l10 + 1) {
			fVec1[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec24[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 1024; l12 = l12 + 1) {
			fVec2[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec22[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 4096; l14 = l14 + 1) {
			fVec3[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec20[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2048; l16 = l16 + 1) {
			fVec4[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec18[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 32768; l18 = l18 + 1) {
			fVec5[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 32768; l19 = l19 + 1) {
			fVec6[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec10[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec30[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec29[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 262144; l23 = l23 + 1) {
			fVec7[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec31[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 32768; l25 = l25 + 1) {
			fVec8[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec27[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec35[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec34[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 262144; l29 = l29 + 1) {
			fVec9[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec36[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 32768; l31 = l31 + 1) {
			fVec10[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec32[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec40[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec39[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 262144; l35 = l35 + 1) {
			fVec11[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec41[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 32768; l37 = l37 + 1) {
			fVec12[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec37[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec44[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec46[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec45[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 262144; l42 = l42 + 1) {
			fVec13[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 3; l43 = l43 + 1) {
			fRec55[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 1024; l44 = l44 + 1) {
			fVec14[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec53[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 1024; l46 = l46 + 1) {
			fVec15[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec51[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 4096; l48 = l48 + 1) {
			fVec16[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec49[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2048; l50 = l50 + 1) {
			fVec17[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec47[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 32768; l52 = l52 + 1) {
			fVec18[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 32768; l53 = l53 + 1) {
			fVec19[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec42[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec58[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec60[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec59[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 262144; l58 = l58 + 1) {
			fVec20[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 32768; l59 = l59 + 1) {
			fVec21[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec56[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec64[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec63[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 262144; l63 = l63 + 1) {
			fVec22[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec65[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 32768; l65 = l65 + 1) {
			fVec23[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec61[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec68[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec70[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec69[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 262144; l70 = l70 + 1) {
			fVec24[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 32768; l71 = l71 + 1) {
			fVec25[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec66[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 3; l73 = l73 + 1) {
			fRec2[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 3; l74 = l74 + 1) {
			fRec3[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 3; l75 = l75 + 1) {
			fRec4[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 3; l76 = l76 + 1) {
			fRec5[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 3; l77 = l77 + 1) {
			fRec6[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 3; l78 = l78 + 1) {
			fRec7[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 3; l79 = l79 + 1) {
			fRec8[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 3; l80 = l80 + 1) {
			fRec9[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 8192; l81 = l81 + 1) {
			fVec26[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec71[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 8192; l83 = l83 + 1) {
			fVec27[l83] = 0.0f;
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
		ui_interface->addHorizontalSlider("Damping", &fHslider4, FAUSTFLOAT(0.3f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Decay", &fHslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Diffusion", &fHslider1, FAUSTFLOAT(0.84f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Modulation", &fHslider0, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Size", &fHslider2, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = fConst2 * fSlow0;
		float fSlow2 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider1)));
		float fSlow3 = fConst2 * ((fSlow2 > 0.84f) ? fSlow2 : 0.84f * std::pow(1.1904762f * fSlow2, 2.5f));
		float fSlow4 = 0.028665f * _VerbHall_faustpower2_f(fSlow0);
		float fSlow5 = fConst6 * (1.25f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider2))) + 0.6f);
		float fSlow6 = 11.2f * std::pow(std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3))), 2.353f) + 0.8f;
		float fSlow7 = 1.2068746f / fSlow6;
		float fSlow8 = std::cos(fConst9 * std::min<float>(1.6e+04f * std::pow(2.0f, -(4.5f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider4))))), fConst8));
		float fSlow9 = 1.6091661f / fSlow6;
		float fSlow10 = 1.0577776f / fSlow6;
		float fSlow11 = 1.4103702f / fSlow6;
		float fSlow12 = 0.8830667f / fSlow6;
		float fSlow13 = 1.1774223f / fSlow6;
		float fSlow14 = 0.8634694f / fSlow6;
		float fSlow15 = 1.1512926f / fSlow6;
		float fSlow16 = 1.4533157f / fSlow6;
		float fSlow17 = 1.9377543f / fSlow6;
		float fSlow18 = 1.328382f / fSlow6;
		float fSlow19 = 1.7711761f / fSlow6;
		float fSlow20 = 1.7745402f / fSlow6;
		float fSlow21 = 2.3660536f / fSlow6;
		float fSlow22 = 1.519644f / fSlow6;
		float fSlow23 = 2.026192f / fSlow6;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec0[0] = fConst1 + (fRec0[1] - std::floor(fConst1 + fRec0[1]));
			fRec1[0] = fSlow1 + fConst3 * fRec1[1];
			float fTemp0 = std::pow(fRec1[0], 1.5f);
			float fTemp1 = fConst0 * (0.003f * fTemp0 * std::sin(6.2831855f * (fRec0[0] + (0.25f - std::floor(fRec0[0] + 0.25f)))) + 0.006f);
			float fTemp2 = std::floor(fTemp1);
			fRec12[0] = fSlow3 + fConst3 * fRec12[1];
			float fTemp3 = std::min<float>(0.72f, 0.71428573f * fRec12[0]);
			fRec13[0] = fConst4 + (fRec13[1] - std::floor(fConst4 + fRec13[1]));
			fRec14[0] = fSlow4 + fConst3 * fRec14[1];
			fRec15[0] = fSlow5 + fConst5 * fRec15[1];
			float fTemp4 = fConst7 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec13[0] + 0.4456f)) + 1.0f);
			float fTemp5 = std::floor(fTemp4);
			float fTemp6 = std::exp(-(fSlow7 * fRec15[0]));
			float fTemp7 = _VerbHall_faustpower2_f(fTemp6);
			float fTemp8 = 1.0f - fTemp7;
			float fTemp9 = 1.0f - fSlow8 * fTemp7;
			float fTemp10 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp9) / _VerbHall_faustpower2_f(fTemp8) + -1.0f));
			float fTemp11 = fTemp9 / fTemp8;
			fRec17[0] = -(fConst12 * (fConst11 * fRec17[1] - (fRec6[1] + fRec6[2])));
			fRec16[0] = fTemp6 * (fTemp10 + (1.0f - fTemp11)) * (fRec6[1] + fRec17[0] * (std::exp(-(fSlow9 * fRec15[0])) / fTemp6 + -1.0f)) + (fTemp11 - fTemp10) * fRec16[1];
			float fTemp12 = 0.35355338f * fRec16[0] + 1e-20f;
			fVec0[IOTA0 & 262143] = fTemp12;
			int iTemp13 = int(fTemp4);
			float fTemp14 = std::min<float>(0.7f, 0.74404764f * fRec12[0]);
			float fTemp15 = std::min<float>(0.8f, 0.89285713f * fRec12[0]);
			fRec26[0] = float(input0[i0]) - fConst19 * (fConst17 * fRec26[2] + fConst15 * fRec26[1]);
			float fTemp16 = fTemp15 * fRec24[1] + fConst20 * (fRec26[2] + (fRec26[0] - 2.0f * fRec26[1]));
			fVec1[IOTA0 & 1023] = fTemp16;
			fRec24[0] = fVec1[(IOTA0 - iConst21) & 1023];
			float fRec25 = -(fTemp15 * fTemp16);
			float fTemp17 = fRec24[1] + fRec25 + fRec22[1] * fTemp15;
			fVec2[IOTA0 & 1023] = fTemp17;
			fRec22[0] = fVec2[(IOTA0 - iConst22) & 1023];
			float fRec23 = -(fTemp15 * fTemp17);
			float fTemp18 = fRec22[1] + fRec23 + fTemp14 * fRec20[1];
			fVec3[IOTA0 & 4095] = fTemp18;
			fRec20[0] = fVec3[(IOTA0 - iConst23) & 4095];
			float fRec21 = -(fTemp14 * fTemp18);
			float fTemp19 = fRec18[1] * fTemp14 + fRec21 + fRec20[1];
			fVec4[IOTA0 & 2047] = fTemp19;
			fRec18[0] = fVec4[(IOTA0 - iConst24) & 2047];
			float fRec19 = -(fTemp14 * fTemp19);
			float fTemp20 = fRec19 + fRec18[1];
			fVec5[IOTA0 & 32767] = fTemp20;
			float fTemp21 = fConst25 * fRec15[0];
			int iTemp22 = int(fTemp21);
			int iTemp23 = std::min<int>(16385, std::max<int>(0, iTemp22 + 1));
			float fTemp24 = std::floor(fTemp21);
			float fTemp25 = fTemp21 - fTemp24;
			float fTemp26 = fTemp24 + (1.0f - fTemp21);
			int iTemp27 = std::min<int>(16385, std::max<int>(0, iTemp22));
			float fTemp28 = 0.3f * (fVec5[(IOTA0 - iTemp27) & 32767] * fTemp26 + fTemp25 * fVec5[(IOTA0 - iTemp23) & 32767]);
			float fTemp29 = (fTemp4 - fTemp5) * fVec0[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp13 + 1))) & 262143] + fTemp28 + fVec0[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp13))) & 262143] * (fTemp5 + (1.0f - fTemp4)) - fTemp3 * fRec10[1];
			fVec6[IOTA0 & 32767] = fTemp29;
			float fTemp30 = fConst26 * fRec15[0];
			float fTemp31 = fTemp30 + -1.0f;
			int iTemp32 = int(fTemp31);
			float fTemp33 = std::floor(fTemp31);
			fRec10[0] = fVec6[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp32))) & 32767] * (fTemp33 + (2.0f - fTemp30)) + (fTemp30 + (-1.0f - fTemp33)) * fVec6[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp32 + 1))) & 32767];
			float fRec11 = fTemp3 * fTemp29;
			float fTemp34 = std::exp(-(fSlow10 * fRec15[0]));
			float fTemp35 = _VerbHall_faustpower2_f(fTemp34);
			float fTemp36 = 1.0f - fTemp35;
			float fTemp37 = 1.0f - fSlow8 * fTemp35;
			float fTemp38 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp37) / _VerbHall_faustpower2_f(fTemp36) + -1.0f));
			float fTemp39 = fTemp37 / fTemp36;
			fRec30[0] = -(fConst12 * (fConst11 * fRec30[1] - (fRec2[1] + fRec2[2])));
			fRec29[0] = fTemp34 * (fTemp38 + (1.0f - fTemp39)) * (fRec2[1] + fRec30[0] * (std::exp(-(fSlow11 * fRec15[0])) / fTemp34 + -1.0f)) + (fTemp39 - fTemp38) * fRec29[1];
			float fTemp40 = 0.35355338f * fRec29[0] + 1e-20f;
			fVec7[IOTA0 & 262143] = fTemp40;
			fRec31[0] = fConst27 + (fRec31[1] - std::floor(fConst27 + fRec31[1]));
			float fTemp41 = fConst28 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * fRec31[0]) + 1.0f);
			int iTemp42 = int(fTemp41);
			float fTemp43 = std::floor(fTemp41);
			float fTemp44 = fVec7[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp42))) & 262143] * (fTemp43 + (1.0f - fTemp41)) + (fTemp41 - fTemp43) * fVec7[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp42 + 1))) & 262143] + fTemp28 - fRec27[1] * fTemp3;
			fVec8[IOTA0 & 32767] = fTemp44;
			float fTemp45 = fConst29 * fRec15[0];
			float fTemp46 = fTemp45 + -1.0f;
			int iTemp47 = int(fTemp46);
			float fTemp48 = std::floor(fTemp46);
			fRec27[0] = fVec8[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp47))) & 32767] * (fTemp48 + (2.0f - fTemp45)) + (fTemp45 + (-1.0f - fTemp48)) * fVec8[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp47 + 1))) & 32767];
			float fRec28 = fTemp3 * fTemp44;
			float fTemp49 = fRec28 + fRec11;
			float fTemp50 = std::exp(-(fSlow12 * fRec15[0]));
			float fTemp51 = _VerbHall_faustpower2_f(fTemp50);
			float fTemp52 = 1.0f - fTemp51;
			float fTemp53 = 1.0f - fSlow8 * fTemp51;
			float fTemp54 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp53) / _VerbHall_faustpower2_f(fTemp52) + -1.0f));
			float fTemp55 = fTemp53 / fTemp52;
			fRec35[0] = -(fConst12 * (fConst11 * fRec35[1] - (fRec4[1] + fRec4[2])));
			fRec34[0] = fTemp50 * (fTemp54 + (1.0f - fTemp55)) * (fRec4[1] + fRec35[0] * (std::exp(-(fSlow13 * fRec15[0])) / fTemp50 + -1.0f)) + (fTemp55 - fTemp54) * fRec34[1];
			float fTemp56 = 0.35355338f * fRec34[0] + 1e-20f;
			fVec9[IOTA0 & 262143] = fTemp56;
			fRec36[0] = fConst30 + (fRec36[1] - std::floor(fConst30 + fRec36[1]));
			float fTemp57 = fConst31 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec36[0] + 0.2228f)) + 1.0f);
			int iTemp58 = int(fTemp57);
			float fTemp59 = std::floor(fTemp57);
			float fTemp60 = fVec9[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp58))) & 262143] * (fTemp59 + (1.0f - fTemp57)) + (fTemp57 - fTemp59) * fVec9[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp58 + 1))) & 262143] - (fTemp28 + fTemp3 * fRec32[1]);
			fVec10[IOTA0 & 32767] = fTemp60;
			float fTemp61 = fConst32 * fRec15[0];
			float fTemp62 = fTemp61 + -1.0f;
			int iTemp63 = int(fTemp62);
			float fTemp64 = std::floor(fTemp62);
			fRec32[0] = fVec10[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp63))) & 32767] * (fTemp64 + (2.0f - fTemp61)) + (fTemp61 + (-1.0f - fTemp64)) * fVec10[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp63 + 1))) & 32767];
			float fRec33 = fTemp3 * fTemp60;
			float fTemp65 = std::exp(-(fSlow14 * fRec15[0]));
			float fTemp66 = _VerbHall_faustpower2_f(fTemp65);
			float fTemp67 = 1.0f - fTemp66;
			float fTemp68 = 1.0f - fSlow8 * fTemp66;
			float fTemp69 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp68) / _VerbHall_faustpower2_f(fTemp67) + -1.0f));
			float fTemp70 = fTemp68 / fTemp67;
			fRec40[0] = -(fConst12 * (fConst11 * fRec40[1] - (fRec8[1] + fRec8[2])));
			fRec39[0] = fTemp65 * (fTemp69 + (1.0f - fTemp70)) * (fRec8[1] + fRec40[0] * (std::exp(-(fSlow15 * fRec15[0])) / fTemp65 + -1.0f)) + (fTemp70 - fTemp69) * fRec39[1];
			float fTemp71 = 0.35355338f * fRec39[0] + 1e-20f;
			fVec11[IOTA0 & 262143] = fTemp71;
			fRec41[0] = fConst33 + (fRec41[1] - std::floor(fConst33 + fRec41[1]));
			float fTemp72 = fConst34 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec41[0] + 0.6684f)) + 1.0f);
			int iTemp73 = int(fTemp72);
			float fTemp74 = std::floor(fTemp72);
			float fTemp75 = fVec11[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp73))) & 262143] * (fTemp74 + (1.0f - fTemp72)) + (fTemp72 - fTemp74) * fVec11[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp73 + 1))) & 262143] - (fTemp28 + fTemp3 * fRec37[1]);
			fVec12[IOTA0 & 32767] = fTemp75;
			float fTemp76 = fConst35 * fRec15[0];
			float fTemp77 = fTemp76 + -1.0f;
			int iTemp78 = int(fTemp77);
			float fTemp79 = std::floor(fTemp77);
			fRec37[0] = fVec12[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp78))) & 32767] * (fTemp79 + (2.0f - fTemp76)) + (fTemp76 + (-1.0f - fTemp79)) * fVec12[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp78 + 1))) & 32767];
			float fRec38 = fTemp3 * fTemp75;
			float fTemp80 = fRec38 + fRec33 + fTemp49;
			fRec44[0] = fConst36 + (fRec44[1] - std::floor(fConst36 + fRec44[1]));
			float fTemp81 = fConst37 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec44[0] + 0.1114f)) + 1.0f);
			float fTemp82 = std::floor(fTemp81);
			float fTemp83 = std::exp(-(fSlow16 * fRec15[0]));
			float fTemp84 = _VerbHall_faustpower2_f(fTemp83);
			float fTemp85 = 1.0f - fTemp84;
			float fTemp86 = 1.0f - fSlow8 * fTemp84;
			float fTemp87 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp86) / _VerbHall_faustpower2_f(fTemp85) + -1.0f));
			float fTemp88 = fTemp86 / fTemp85;
			fRec46[0] = -(fConst12 * (fConst11 * fRec46[1] - (fRec3[1] + fRec3[2])));
			fRec45[0] = fTemp83 * (fTemp87 + (1.0f - fTemp88)) * (fRec3[1] + fRec46[0] * (std::exp(-(fSlow17 * fRec15[0])) / fTemp83 + -1.0f)) + (fTemp88 - fTemp87) * fRec45[1];
			float fTemp89 = 0.35355338f * fRec45[0] + 1e-20f;
			fVec13[IOTA0 & 262143] = fTemp89;
			int iTemp90 = int(fTemp81);
			fRec55[0] = float(input1[i0]) - fConst19 * (fConst17 * fRec55[2] + fConst15 * fRec55[1]);
			float fTemp91 = fTemp15 * fRec53[1] + fConst20 * (fRec55[2] + (fRec55[0] - 2.0f * fRec55[1]));
			fVec14[IOTA0 & 1023] = fTemp91;
			fRec53[0] = fVec14[(IOTA0 - iConst38) & 1023];
			float fRec54 = -(fTemp15 * fTemp91);
			float fTemp92 = fRec53[1] + fRec54 + fTemp15 * fRec51[1];
			fVec15[IOTA0 & 1023] = fTemp92;
			fRec51[0] = fVec15[(IOTA0 - iConst39) & 1023];
			float fRec52 = -(fTemp15 * fTemp92);
			float fTemp93 = fTemp14 * fRec49[1] + fRec52 + fRec51[1];
			fVec16[IOTA0 & 4095] = fTemp93;
			fRec49[0] = fVec16[(IOTA0 - iConst40) & 4095];
			float fRec50 = -(fTemp14 * fTemp93);
			float fTemp94 = fRec49[1] + fRec50 + fTemp14 * fRec47[1];
			fVec17[IOTA0 & 2047] = fTemp94;
			fRec47[0] = fVec17[(IOTA0 - iConst41) & 2047];
			float fRec48 = -(fTemp14 * fTemp94);
			float fTemp95 = fRec48 + fRec47[1];
			fVec18[IOTA0 & 32767] = fTemp95;
			float fTemp96 = 0.3f * (fTemp26 * fVec18[(IOTA0 - iTemp27) & 32767] + fTemp25 * fVec18[(IOTA0 - iTemp23) & 32767]);
			float fTemp97 = fTemp96 + (fTemp81 - fTemp82) * fVec13[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp90 + 1))) & 262143] + fTemp3 * fRec42[1] + fVec13[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp90))) & 262143] * (fTemp82 + (1.0f - fTemp81));
			fVec19[IOTA0 & 32767] = fTemp97;
			float fTemp98 = fConst42 * fRec15[0];
			float fTemp99 = fTemp98 + -1.0f;
			int iTemp100 = int(fTemp99);
			float fTemp101 = std::floor(fTemp99);
			fRec42[0] = fVec19[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp100))) & 32767] * (fTemp101 + (2.0f - fTemp98)) + (fTemp98 + (-1.0f - fTemp101)) * fVec19[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp100 + 1))) & 32767];
			float fRec43 = -(fTemp3 * fTemp97);
			fRec58[0] = fConst43 + (fRec58[1] - std::floor(fConst43 + fRec58[1]));
			float fTemp102 = fConst44 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec58[0] + 0.557f)) + 1.0f);
			float fTemp103 = std::floor(fTemp102);
			float fTemp104 = std::exp(-(fSlow18 * fRec15[0]));
			float fTemp105 = _VerbHall_faustpower2_f(fTemp104);
			float fTemp106 = 1.0f - fTemp105;
			float fTemp107 = 1.0f - fSlow8 * fTemp105;
			float fTemp108 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp107) / _VerbHall_faustpower2_f(fTemp106) + -1.0f));
			float fTemp109 = fTemp107 / fTemp106;
			fRec60[0] = -(fConst12 * (fConst11 * fRec60[1] - (fRec7[1] + fRec7[2])));
			fRec59[0] = fTemp104 * (fTemp108 + (1.0f - fTemp109)) * (fRec7[1] + fRec60[0] * (std::exp(-(fSlow19 * fRec15[0])) / fTemp104 + -1.0f)) + (fTemp109 - fTemp108) * fRec59[1];
			float fTemp110 = 0.35355338f * fRec59[0] + 1e-20f;
			fVec20[IOTA0 & 262143] = fTemp110;
			int iTemp111 = int(fTemp102);
			float fTemp112 = (fTemp102 - fTemp103) * fVec20[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp111 + 1))) & 262143] + fVec20[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp111))) & 262143] * (fTemp103 + (1.0f - fTemp102)) + fTemp96 + fTemp3 * fRec56[1];
			fVec21[IOTA0 & 32767] = fTemp112;
			float fTemp113 = fConst45 * fRec15[0];
			float fTemp114 = fTemp113 + -1.0f;
			int iTemp115 = int(fTemp114);
			float fTemp116 = std::floor(fTemp114);
			fRec56[0] = fVec21[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp115))) & 32767] * (fTemp116 + (2.0f - fTemp113)) + (fTemp113 + (-1.0f - fTemp116)) * fVec21[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp115 + 1))) & 32767];
			float fRec57 = -(fTemp3 * fTemp112);
			float fTemp117 = std::exp(-(fSlow20 * fRec15[0]));
			float fTemp118 = _VerbHall_faustpower2_f(fTemp117);
			float fTemp119 = 1.0f - fTemp118;
			float fTemp120 = 1.0f - fSlow8 * fTemp118;
			float fTemp121 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp120) / _VerbHall_faustpower2_f(fTemp119) + -1.0f));
			float fTemp122 = fTemp120 / fTemp119;
			fRec64[0] = -(fConst12 * (fConst11 * fRec64[1] - (fRec5[1] + fRec5[2])));
			fRec63[0] = fTemp117 * (fTemp121 + (1.0f - fTemp122)) * (fRec5[1] + fRec64[0] * (std::exp(-(fSlow21 * fRec15[0])) / fTemp117 + -1.0f)) + (fTemp122 - fTemp121) * fRec63[1];
			float fTemp123 = 0.35355338f * fRec63[0] + 1e-20f;
			fVec22[IOTA0 & 262143] = fTemp123;
			fRec65[0] = fConst46 + (fRec65[1] - std::floor(fConst46 + fRec65[1]));
			float fTemp124 = fConst47 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec65[0] + 0.3342f)) + 1.0f);
			int iTemp125 = int(fTemp124);
			float fTemp126 = std::floor(fTemp124);
			float fTemp127 = fVec22[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp125))) & 262143] * (fTemp126 + (1.0f - fTemp124)) + fTemp3 * fRec61[1] + (fTemp124 - fTemp126) * fVec22[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp125 + 1))) & 262143] - fTemp96;
			fVec23[IOTA0 & 32767] = fTemp127;
			float fTemp128 = fConst48 * fRec15[0];
			float fTemp129 = fTemp128 + -1.0f;
			int iTemp130 = int(fTemp129);
			float fTemp131 = std::floor(fTemp129);
			fRec61[0] = fVec23[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp130))) & 32767] * (fTemp131 + (2.0f - fTemp128)) + (fTemp128 + (-1.0f - fTemp131)) * fVec23[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp130 + 1))) & 32767];
			float fRec62 = -(fTemp3 * fTemp127);
			fRec68[0] = fConst49 + (fRec68[1] - std::floor(fConst49 + fRec68[1]));
			float fTemp132 = fConst50 * fRec15[0] + fRec14[0] * (std::sin(6.2831855f * (fRec68[0] + 0.7798f)) + 1.0f);
			float fTemp133 = std::floor(fTemp132);
			float fTemp134 = std::exp(-(fSlow22 * fRec15[0]));
			float fTemp135 = _VerbHall_faustpower2_f(fTemp134);
			float fTemp136 = 1.0f - fTemp135;
			float fTemp137 = 1.0f - fSlow8 * fTemp135;
			float fTemp138 = std::sqrt(std::max<float>(0.0f, _VerbHall_faustpower2_f(fTemp137) / _VerbHall_faustpower2_f(fTemp136) + -1.0f));
			float fTemp139 = fTemp137 / fTemp136;
			fRec70[0] = -(fConst12 * (fConst11 * fRec70[1] - (fRec9[1] + fRec9[2])));
			fRec69[0] = fTemp134 * (fTemp138 + (1.0f - fTemp139)) * (fRec9[1] + fRec70[0] * (std::exp(-(fSlow23 * fRec15[0])) / fTemp134 + -1.0f)) + (fTemp139 - fTemp138) * fRec69[1];
			float fTemp140 = 0.35355338f * fRec69[0] + 1e-20f;
			fVec24[IOTA0 & 262143] = fTemp140;
			int iTemp141 = int(fTemp132);
			float fTemp142 = (fTemp132 - fTemp133) * fVec24[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp141 + 1))) & 262143] + fTemp3 * fRec66[1] + fVec24[(IOTA0 - std::min<int>(131073, std::max<int>(0, iTemp141))) & 262143] * (fTemp133 + (1.0f - fTemp132)) - fTemp96;
			fVec25[IOTA0 & 32767] = fTemp142;
			float fTemp143 = fConst51 * fRec15[0];
			float fTemp144 = fTemp143 + -1.0f;
			int iTemp145 = int(fTemp144);
			float fTemp146 = std::floor(fTemp144);
			fRec66[0] = fVec25[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp145))) & 32767] * (fTemp146 + (2.0f - fTemp143)) + (fTemp143 + (-1.0f - fTemp146)) * fVec25[(IOTA0 - std::min<int>(16385, std::max<int>(0, iTemp145 + 1))) & 32767];
			float fRec67 = -(fTemp3 * fTemp142);
			fRec2[0] = fRec66[1] + fRec61[1] + fRec56[1] + fRec42[1] + fRec37[1] + fRec32[1] + fRec10[1] + fRec27[1] + fRec67 + fRec62 + fRec57 + fRec43 + fTemp80;
			fRec3[0] = fRec37[1] + fRec32[1] + fRec10[1] + fRec27[1] + fTemp80 - (fRec66[1] + fRec61[1] + fRec56[1] + fRec42[1] + fRec67 + fRec62 + fRec43 + fRec57);
			float fTemp147 = fRec33 + fRec38;
			fRec4[0] = fRec56[1] + fRec42[1] + fRec10[1] + fRec27[1] + fRec57 + fRec43 + fTemp49 - (fRec66[1] + fRec61[1] + fRec37[1] + fRec32[1] + fRec67 + fRec62 + fTemp147);
			fRec5[0] = fRec66[1] + fRec61[1] + fRec10[1] + fRec27[1] + fRec67 + fRec62 + fTemp49 - (fRec56[1] + fRec42[1] + fRec37[1] + fRec32[1] + fRec57 + fRec43 + fTemp147);
			float fTemp148 = fRec11 + fRec38;
			float fTemp149 = fRec28 + fRec33;
			fRec6[0] = fRec61[1] + fRec42[1] + fRec32[1] + fRec27[1] + fRec62 + fRec43 + fTemp149 - (fRec66[1] + fRec56[1] + fRec37[1] + fRec10[1] + fRec67 + fRec57 + fTemp148);
			fRec7[0] = fRec66[1] + fRec56[1] + fRec32[1] + fRec27[1] + fRec67 + fRec57 + fTemp149 - (fRec61[1] + fRec42[1] + fRec37[1] + fRec10[1] + fRec62 + fRec43 + fTemp148);
			float fTemp150 = fRec11 + fRec33;
			float fTemp151 = fRec28 + fRec38;
			fRec8[0] = fRec66[1] + fRec42[1] + fRec37[1] + fRec27[1] + fRec67 + fRec43 + fTemp151 - (fRec61[1] + fRec56[1] + fRec32[1] + fRec10[1] + fRec62 + fRec57 + fTemp150);
			fRec9[0] = fRec61[1] + fRec56[1] + fRec37[1] + fRec27[1] + fRec62 + fRec57 + fTemp151 - (fRec66[1] + fRec42[1] + fRec32[1] + fRec10[1] + fRec67 + fRec43 + fTemp150);
			float fTemp152 = fRec3[0] + fRec4[0];
			fVec26[IOTA0 & 8191] = fTemp152;
			int iTemp153 = int(fTemp1);
			fRec71[0] = fConst52 + (fRec71[1] - std::floor(fConst52 + fRec71[1]));
			float fTemp154 = fConst0 * (0.003f * fTemp0 * std::sin(6.2831855f * (fRec71[0] - std::floor(fRec71[0]))) + 0.006f);
			int iTemp155 = int(fTemp154);
			float fTemp156 = std::floor(fTemp154);
			float fTemp157 = 0.7853982f * std::min<float>(1.0f, 1.6666666f * fRec1[0]);
			float fTemp158 = std::sin(fTemp157);
			float fTemp159 = std::cos(fTemp157);
			output0[i0] = FAUSTFLOAT(0.73f * fTemp152 * fTemp159 + 0.365f * fTemp158 * ((fTemp1 - fTemp2) * fVec26[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp153 + 1))) & 8191] + fVec26[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp155))) & 8191] * (fTemp156 + (1.0f - fTemp154)) + (fTemp154 - fTemp156) * fVec26[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp155 + 1))) & 8191] + fVec26[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp153))) & 8191] * (fTemp2 + (1.0f - fTemp1))));
			float fTemp160 = fConst0 * (0.003f * fTemp0 * std::sin(6.2831855f * (fRec0[0] + (0.75f - std::floor(fRec0[0] + 0.75f)))) + 0.006f);
			float fTemp161 = std::floor(fTemp160);
			float fTemp162 = fRec3[0] - fRec4[0];
			fVec27[IOTA0 & 8191] = fTemp162;
			int iTemp163 = int(fTemp160);
			float fTemp164 = fConst0 * (0.003f * fTemp0 * std::sin(6.2831855f * (fRec71[0] + (0.5f - std::floor(fRec71[0] + 0.5f)))) + 0.006f);
			int iTemp165 = int(fTemp164);
			float fTemp166 = std::floor(fTemp164);
			output1[i0] = FAUSTFLOAT(0.73f * fTemp162 * fTemp159 + 0.365f * fTemp158 * ((fTemp160 - fTemp161) * fVec27[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp163 + 1))) & 8191] + fVec27[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp165))) & 8191] * (fTemp166 + (1.0f - fTemp164)) + (fTemp164 - fTemp166) * fVec27[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp165 + 1))) & 8191] + fVec27[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp163))) & 8191] * (fTemp161 + (1.0f - fTemp160))));
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec15[1] = fRec15[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			IOTA0 = IOTA0 + 1;
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec24[1] = fRec24[0];
			fRec22[1] = fRec22[0];
			fRec20[1] = fRec20[0];
			fRec18[1] = fRec18[0];
			fRec10[1] = fRec10[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec31[1] = fRec31[0];
			fRec27[1] = fRec27[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fRec36[1] = fRec36[0];
			fRec32[1] = fRec32[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fRec41[1] = fRec41[0];
			fRec37[1] = fRec37[0];
			fRec44[1] = fRec44[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fRec55[2] = fRec55[1];
			fRec55[1] = fRec55[0];
			fRec53[1] = fRec53[0];
			fRec51[1] = fRec51[0];
			fRec49[1] = fRec49[0];
			fRec47[1] = fRec47[0];
			fRec42[1] = fRec42[0];
			fRec58[1] = fRec58[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fRec56[1] = fRec56[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fRec65[1] = fRec65[0];
			fRec61[1] = fRec61[0];
			fRec68[1] = fRec68[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fRec66[1] = fRec66[0];
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
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec71[1] = fRec71[0];
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

	FAUST_ADDHORIZONTALSLIDER("Damping", fHslider4, 0.3f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Decay", fHslider3, 0.5f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Diffusion", fHslider1, 0.84f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Modulation", fHslider0, 0.32f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Size", fHslider2, 0.32f, 0.0f, 1.0f, 0.001f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Damping, "Damping", fHslider4, 0.3f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Decay, "Decay", fHslider3, 0.5f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Diffusion, "Diffusion", fHslider1, 0.84f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Modulation, "Modulation", fHslider0, 0.32f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Size, "Size", fHslider2, 0.32f, 0.0f, 1.0f, 0.001f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
