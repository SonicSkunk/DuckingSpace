/* ------------------------------------------------------------
name: "VerbScript"
Code generated with Faust 2.74.6 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _VerbScript -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___VerbScript_H__
#define  ___VerbScript_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _VerbScript
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

const static int i_VerbScriptSIG0Wave0[2048] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919,7927,7933,7937,7949,7951,7963,7993,8009,8011,8017,8039,8053,8059,8069,8081,8087,8089,8093,8101,8111,8117,8123,8147,8161,8167,8171,8179,8191,8209,8219,8221,8231,8233,8237,8243,8263,8269,8273,8287,8291,8293,8297,8311,8317,8329,8353,8363,8369,8377,8387,8389,8419,8423,8429,8431,8443,8447,8461,8467,8501,8513,8521,8527,8537,8539,8543,8563,8573,8581,8597,8599,8609,8623,8627,8629,8641,8647,8663,8669,8677,8681,8689,8693,8699,8707,8713,8719,8731,8737,8741,8747,8753,8761,8779,8783,8803,8807,8819,8821,8831,8837,8839,8849,8861,8863,8867,8887,8893,8923,8929,8933,8941,8951,8963,8969,8971,8999,9001,9007,9011,9013,9029,9041,9043,9049,9059,9067,9091,9103,9109,9127,9133,9137,9151,9157,9161,9173,9181,9187,9199,9203,9209,9221,9227,9239,9241,9257,9277,9281,9283,9293,9311,9319,9323,9337,9341,9343,9349,9371,9377,9391,9397,9403,9413,9419,9421,9431,9433,9437,9439,9461,9463,9467,9473,9479,9491,9497,9511,9521,9533,9539,9547,9551,9587,9601,9613,9619,9623,9629,9631,9643,9649,9661,9677,9679,9689,9697,9719,9721,9733,9739,9743,9749,9767,9769,9781,9787,9791,9803,9811,9817,9829,9833,9839,9851,9857,9859,9871,9883,9887,9901,9907,9923,9929,9931,9941,9949,9967,9973,10007,10009,10037,10039,10061,10067,10069,10079,10091,10093,10099,10103,10111,10133,10139,10141,10151,10159,10163,10169,10177,10181,10193,10211,10223,10243,10247,10253,10259,10267,10271,10273,10289,10301,10303,10313,10321,10331,10333,10337,10343,10357,10369,10391,10399,10427,10429,10433,10453,10457,10459,10463,10477,10487,10499,10501,10513,10529,10531,10559,10567,10589,10597,10601,10607,10613,10627,10631,10639,10651,10657,10663,10667,10687,10691,10709,10711,10723,10729,10733,10739,10753,10771,10781,10789,10799,10831,10837,10847,10853,10859,10861,10867,10883,10889,10891,10903,10909,10937,10939,10949,10957,10973,10979,10987,10993,11003,11027,11047,11057,11059,11069,11071,11083,11087,11093,11113,11117,11119,11131,11149,11159,11161,11171,11173,11177,11197,11213,11239,11243,11251,11257,11261,11273,11279,11287,11299,11311,11317,11321,11329,11351,11353,11369,11383,11393,11399,11411,11423,11437,11443,11447,11467,11471,11483,11489,11491,11497,11503,11519,11527,11549,11551,11579,11587,11593,11597,11617,11621,11633,11657,11677,11681,11689,11699,11701,11717,11719,11731,11743,11777,11779,11783,11789,11801,11807,11813,11821,11827,11831,11833,11839,11863,11867,11887,11897,11903,11909,11923,11927,11933,11939,11941,11953,11959,11969,11971,11981,11987,12007,12011,12037,12041,12043,12049,12071,12073,12097,12101,12107,12109,12113,12119,12143,12149,12157,12161,12163,12197,12203,12211,12227,12239,12241,12251,12253,12263,12269,12277,12281,12289,12301,12323,12329,12343,12347,12373,12377,12379,12391,12401,12409,12413,12421,12433,12437,12451,12457,12473,12479,12487,12491,12497,12503,12511,12517,12527,12539,12541,12547,12553,12569,12577,12583,12589,12601,12611,12613,12619,12637,12641,12647,12653,12659,12671,12689,12697,12703,12713,12721,12739,12743,12757,12763,12781,12791,12799,12809,12821,12823,12829,12841,12853,12889,12893,12899,12907,12911,12917,12919,12923,12941,12953,12959,12967,12973,12979,12983,13001,13003,13007,13009,13033,13037,13043,13049,13063,13093,13099,13103,13109,13121,13127,13147,13151,13159,13163,13171,13177,13183,13187,13217,13219,13229,13241,13249,13259,13267,13291,13297,13309,13313,13327,13331,13337,13339,13367,13381,13397,13399,13411,13417,13421,13441,13451,13457,13463,13469,13477,13487,13499,13513,13523,13537,13553,13567,13577,13591,13597,13613,13619,13627,13633,13649,13669,13679,13681,13687,13691,13693,13697,13709,13711,13721,13723,13729,13751,13757,13759,13763,13781,13789,13799,13807,13829,13831,13841,13859,13873,13877,13879,13883,13901,13903,13907,13913,13921,13931,13933,13963,13967,13997,13999,14009,14011,14029,14033,14051,14057,14071,14081,14083,14087,14107,14143,14149,14153,14159,14173,14177,14197,14207,14221,14243,14249,14251,14281,14293,14303,14321,14323,14327,14341,14347,14369,14387,14389,14401,14407,14411,14419,14423,14431,14437,14447,14449,14461,14479,14489,14503,14519,14533,14537,14543,14549,14551,14557,14561,14563,14591,14593,14621,14627,14629,14633,14639,14653,14657,14669,14683,14699,14713,14717,14723,14731,14737,14741,14747,14753,14759,14767,14771,14779,14783,14797,14813,14821,14827,14831,14843,14851,14867,14869,14879,14887,14891,14897,14923,14929,14939,14947,14951,14957,14969,14983,15013,15017,15031,15053,15061,15073,15077,15083,15091,15101,15107,15121,15131,15137,15139,15149,15161,15173,15187,15193,15199,15217,15227,15233,15241,15259,15263,15269,15271,15277,15287,15289,15299,15307,15313,15319,15329,15331,15349,15359,15361,15373,15377,15383,15391,15401,15413,15427,15439,15443,15451,15461,15467,15473,15493,15497,15511,15527,15541,15551,15559,15569,15581,15583,15601,15607,15619,15629,15641,15643,15647,15649,15661,15667,15671,15679,15683,15727,15731,15733,15737,15739,15749,15761,15767,15773,15787,15791,15797,15803,15809,15817,15823,15859,15877,15881,15887,15889,15901,15907,15913,15919,15923,15937,15959,15971,15973,15991,16001,16007,16033,16057,16061,16063,16067,16069,16073,16087,16091,16097,16103,16111,16127,16139,16141,16183,16187,16189,16193,16217,16223,16229,16231,16249,16253,16267,16273,16301,16319,16333,16339,16349,16361,16363,16369,16381,16411,16417,16421,16427,16433,16447,16451,16453,16477,16481,16487,16493,16519,16529,16547,16553,16561,16567,16573,16603,16607,16619,16631,16633,16649,16651,16657,16661,16673,16691,16693,16699,16703,16729,16741,16747,16759,16763,16787,16811,16823,16829,16831,16843,16871,16879,16883,16889,16901,16903,16921,16927,16931,16937,16943,16963,16979,16981,16987,16993,17011,17021,17027,17029,17033,17041,17047,17053,17077,17093,17099,17107,17117,17123,17137,17159,17167,17183,17189,17191,17203,17207,17209,17231,17239,17257,17291,17293,17299,17317,17321,17327,17333,17341,17351,17359,17377,17383,17387,17389,17393,17401,17417,17419,17431,17443,17449,17467,17471,17477,17483,17489,17491,17497,17509,17519,17539,17551,17569,17573,17579,17581,17597,17599,17609,17623,17627,17657,17659,17669,17681,17683,17707,17713,17729,17737,17747,17749,17761,17783,17789,17791,17807,17827,17837,17839,17851,17863};
class _VerbScriptSIG0 {
	
  public:
	
	int i_VerbScriptSIG0Wave0_idx;
	
  public:
	
	int getNumInputs_VerbScriptSIG0() {
		return 0;
	}
	int getNumOutputs_VerbScriptSIG0() {
		return 1;
	}
	
	void instanceInit_VerbScriptSIG0(int sample_rate) {
		i_VerbScriptSIG0Wave0_idx = 0;
	}
	
	void fill_VerbScriptSIG0(int count, int* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			table[i1] = i_VerbScriptSIG0Wave0[i_VerbScriptSIG0Wave0_idx];
			i_VerbScriptSIG0Wave0_idx = (1 + i_VerbScriptSIG0Wave0_idx) % 2048;
		}
	}

};

static _VerbScriptSIG0* new_VerbScriptSIG0() { return (_VerbScriptSIG0*)new _VerbScriptSIG0(); }
static void delete_VerbScriptSIG0(_VerbScriptSIG0* dsp) { delete dsp; }

static float _VerbScript_faustpower2_f(float value) {
	return value * value;
}
static int itbl0_VerbScriptSIG0[2048];

class _VerbScript final : public ::faust::dsp {
	
 public:
	
	int iVec0[2];
	FAUSTFLOAT fHslider0;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	FAUSTFLOAT fHslider1;
	float fRec10[2];
	float fRec12[2];
	float fRec16[2];
	int IOTA0;
	float fVec1[16384];
	float fVec2[2];
	float fRec15[2];
	float fRec13[2];
	float fRec18[2];
	float fVec3[16384];
	float fVec4[2];
	float fRec17[2];
	float fRec14[2];
	float fRec22[2];
	float fVec5[16384];
	float fVec6[2];
	float fRec21[2];
	float fRec19[2];
	float fRec24[2];
	float fVec7[16384];
	float fVec8[2];
	float fRec23[2];
	float fRec20[2];
	float fRec28[2];
	float fVec9[16384];
	float fVec10[2];
	float fRec27[2];
	float fRec25[2];
	float fRec30[2];
	float fVec11[16384];
	float fVec12[2];
	float fRec29[2];
	float fRec26[2];
	float fRec34[2];
	float fVec13[16384];
	float fVec14[2];
	float fRec33[2];
	float fRec31[2];
	float fRec36[2];
	float fVec15[16384];
	float fVec16[2];
	float fRec35[2];
	float fRec32[2];
	float fRec40[2];
	float fVec17[16384];
	float fVec18[2];
	float fRec39[2];
	float fRec37[2];
	float fRec42[2];
	float fVec19[16384];
	float fVec20[2];
	float fRec41[2];
	float fRec38[2];
	float fVec21[1024];
	FAUSTFLOAT fHslider2;
	float fConst21;
	float fRec43[2];
	float fRec44[2];
	FAUSTFLOAT fHslider3;
	float fVec22[16384];
	float fVec23[2];
	float fRec11[2];
	float fRec48[2];
	float fRec50[2];
	float fVec24[1024];
	float fVec25[16384];
	float fVec26[2];
	float fRec49[2];
	float fVec27[16384];
	float fVec28[2];
	float fRec47[2];
	float fRec45[2];
	float fRec52[2];
	float fVec29[16384];
	float fVec30[2];
	float fRec51[2];
	float fRec46[2];
	float fRec56[2];
	float fVec31[16384];
	float fVec32[2];
	float fRec55[2];
	float fRec53[2];
	float fRec58[2];
	float fVec33[16384];
	float fVec34[2];
	float fRec57[2];
	float fRec54[2];
	float fRec62[2];
	float fVec35[16384];
	float fVec36[2];
	float fRec61[2];
	float fRec59[2];
	float fRec64[2];
	float fVec37[16384];
	float fVec38[2];
	float fRec63[2];
	float fRec60[2];
	float fRec68[2];
	float fVec39[16384];
	float fVec40[2];
	float fRec67[2];
	float fRec65[2];
	float fRec70[2];
	float fVec41[16384];
	float fVec42[2];
	float fRec69[2];
	float fRec66[2];
	float fRec74[2];
	float fVec43[16384];
	float fVec44[2];
	float fRec73[2];
	float fRec71[2];
	float fRec76[2];
	float fVec45[16384];
	float fVec46[2];
	float fRec75[2];
	float fRec72[2];
	float fVec47[16384];
	float fVec48[16384];
	float fVec49[2];
	float fRec9[2];
	float fConst22;
	float fConst23;
	float fRec8[2];
	float fRec7[3];
	float fRec6[3];
	float fVec50[2];
	float fConst24;
	float fConst25;
	float fRec5[2];
	float fRec4[3];
	float fRec3[3];
	FAUSTFLOAT fHslider4;
	float fConst26;
	float fRec79[2];
	float fRec78[3];
	float fConst27;
	float fRec77[3];
	float fConst28;
	float fConst29;
	float fRec83[2];
	float fRec82[3];
	float fConst30;
	float fRec81[3];
	float fConst31;
	float fRec80[3];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	float fVec51[1024];
	float fRec2[2];
	FAUSTFLOAT fHslider7;
	float fRec95[2];
	float fVec52[16384];
	float fVec53[16384];
	float fVec54[2];
	float fRec94[2];
	float fRec93[2];
	float fRec92[3];
	float fRec91[3];
	float fVec55[2];
	float fRec90[2];
	float fRec89[3];
	float fRec88[3];
	float fRec98[2];
	float fRec97[3];
	float fRec96[3];
	float fRec102[2];
	float fRec101[3];
	float fRec100[3];
	float fRec99[3];
	float fVec56[1024];
	float fRec87[2];
	float fVec57[16384];
	float fVec58[2];
	float fRec86[2];
	float fRec84[2];
	float fRec104[2];
	float fVec59[16384];
	float fVec60[2];
	float fRec103[2];
	float fRec85[2];
	float fVec61[16384];
	float fVec62[2];
	float fRec107[2];
	float fRec105[2];
	float fVec63[16384];
	float fVec64[2];
	float fRec108[2];
	float fRec106[2];
	float fVec65[16384];
	float fVec66[2];
	float fRec111[2];
	float fRec109[2];
	float fRec113[2];
	float fVec67[16384];
	float fVec68[2];
	float fRec112[2];
	float fRec110[2];
	float fRec117[2];
	float fVec69[16384];
	float fVec70[2];
	float fRec116[2];
	float fRec114[2];
	float fVec71[16384];
	float fVec72[2];
	float fRec118[2];
	float fRec115[2];
	float fRec0[2];
	float fRec1[2];
	
 public:
	_VerbScript() {
	}
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.18.0");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _VerbScript -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0");
		m->declare("delays.lib/fdelay1a:author", "Julius O. Smith III");
		m->declare("delays.lib/fdelay4:author", "Julius O. Smith III");
		m->declare("delays.lib/fdelayltv:author", "Julius O. Smith III");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("filename", "VerbScript.dsp");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass_plus_lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/nlf2:author", "Julius O. Smith III");
		m->declare("filters.lib/nlf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/nlf2:license", "MIT-style STK-4.3 license");
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
		m->declare("name", "VerbScript");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "1.5.1");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/jpverb:author", "Julian Parker, bug fixes and minor interface changes by Till Bovermann");
		m->declare("reverbs.lib/jpverb:license", "GPL2+");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "1.3.0");
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
		_VerbScriptSIG0* sig0 = new_VerbScriptSIG0();
		sig0->instanceInit_VerbScriptSIG0(sample_rate);
		sig0->fill_VerbScriptSIG0(2048, itbl0_VerbScriptSIG0);
		delete_VerbScriptSIG0(sig0);
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::tan(1884.9556f / fConst0);
		fConst2 = _VerbScript_faustpower2_f(fConst1);
		fConst3 = 1.0f / fConst2;
		fConst4 = 2.0f * (1.0f - fConst3);
		fConst5 = 1.0f / fConst1;
		fConst6 = (fConst5 + -0.618034f) / fConst1 + 1.0f;
		fConst7 = 1.0f / ((fConst5 + 0.618034f) / fConst1 + 1.0f);
		fConst8 = (fConst5 + -1.618034f) / fConst1 + 1.0f;
		fConst9 = (fConst5 + 1.618034f) / fConst1 + 1.0f;
		fConst10 = 1.0f / fConst9;
		fConst11 = std::tan(15707.963f / fConst0);
		fConst12 = _VerbScript_faustpower2_f(fConst11);
		fConst13 = 2.0f * (1.0f - 1.0f / fConst12);
		fConst14 = 1.0f / fConst11;
		fConst15 = (fConst14 + -0.618034f) / fConst11 + 1.0f;
		fConst16 = (fConst14 + 0.618034f) / fConst11 + 1.0f;
		fConst17 = 1.0f / fConst16;
		fConst18 = (fConst14 + -1.618034f) / fConst11 + 1.0f;
		fConst19 = (fConst14 + 1.618034f) / fConst11 + 1.0f;
		fConst20 = 1.0f / fConst19;
		fConst21 = 6.2831855f / fConst0;
		fConst22 = 1.0f - fConst14;
		fConst23 = 1.0f / (fConst14 + 1.0f);
		fConst24 = 1.0f - fConst5;
		fConst25 = 1.0f / (fConst5 + 1.0f);
		fConst26 = 1.0f / (fConst1 * fConst16);
		fConst27 = 1.0f / (fConst2 * fConst9);
		fConst28 = (fConst5 + -1.618034f) / fConst1 + 1.0f;
		fConst29 = 1.0f / ((fConst5 + 1.618034f) / fConst1 + 1.0f);
		fConst30 = 1.0f / (fConst12 * fConst19);
		fConst31 = 1.0f / (fConst12 * fConst16);
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.5f);
		fHslider1 = FAUSTFLOAT(3.5f);
		fHslider2 = FAUSTFLOAT(0.1f);
		fHslider3 = FAUSTFLOAT(0.1f);
		fHslider4 = FAUSTFLOAT(1.0f);
		fHslider5 = FAUSTFLOAT(1.0f);
		fHslider6 = FAUSTFLOAT(4.2f);
		fHslider7 = FAUSTFLOAT(0.707f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec10[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec12[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec16[l3] = 0.0f;
		}
		IOTA0 = 0;
		for (int l4 = 0; l4 < 16384; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec15[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec13[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec18[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 16384; l9 = l9 + 1) {
			fVec3[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec4[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec17[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec14[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec22[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 16384; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec21[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec19[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec24[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 16384; l19 = l19 + 1) {
			fVec7[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec8[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec23[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec20[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec28[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 16384; l24 = l24 + 1) {
			fVec9[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec10[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec27[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec25[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec30[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 16384; l29 = l29 + 1) {
			fVec11[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fVec12[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec29[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec26[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec34[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 16384; l34 = l34 + 1) {
			fVec13[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fVec14[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec33[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec31[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec36[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 16384; l39 = l39 + 1) {
			fVec15[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fVec16[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec35[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec32[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec40[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 16384; l44 = l44 + 1) {
			fVec17[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec18[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec39[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec37[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec42[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 16384; l49 = l49 + 1) {
			fVec19[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec20[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec41[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec38[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 1024; l53 = l53 + 1) {
			fVec21[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec43[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec44[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 16384; l56 = l56 + 1) {
			fVec22[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec23[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec11[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec48[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec50[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 1024; l61 = l61 + 1) {
			fVec24[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 16384; l62 = l62 + 1) {
			fVec25[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fVec26[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec49[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 16384; l65 = l65 + 1) {
			fVec27[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec28[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec47[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec45[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec52[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 16384; l70 = l70 + 1) {
			fVec29[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fVec30[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec51[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec46[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec56[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 16384; l75 = l75 + 1) {
			fVec31[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fVec32[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec55[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec53[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec58[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 16384; l80 = l80 + 1) {
			fVec33[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fVec34[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec57[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec54[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec62[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 16384; l85 = l85 + 1) {
			fVec35[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec36[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec61[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec59[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec64[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 16384; l90 = l90 + 1) {
			fVec37[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fVec38[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec63[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec60[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec68[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 16384; l95 = l95 + 1) {
			fVec39[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec40[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec67[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec65[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec70[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 16384; l100 = l100 + 1) {
			fVec41[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec42[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec69[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec66[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec74[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 16384; l105 = l105 + 1) {
			fVec43[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec44[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec73[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec71[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec76[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 16384; l110 = l110 + 1) {
			fVec45[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fVec46[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec75[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec72[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 16384; l114 = l114 + 1) {
			fVec47[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 16384; l115 = l115 + 1) {
			fVec48[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fVec49[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec9[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec8[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 3; l119 = l119 + 1) {
			fRec7[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 3; l120 = l120 + 1) {
			fRec6[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec50[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec5[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 3; l123 = l123 + 1) {
			fRec4[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 3; l124 = l124 + 1) {
			fRec3[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec79[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 3; l126 = l126 + 1) {
			fRec78[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 3; l127 = l127 + 1) {
			fRec77[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec83[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 3; l129 = l129 + 1) {
			fRec82[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 3; l130 = l130 + 1) {
			fRec81[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 3; l131 = l131 + 1) {
			fRec80[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 1024; l132 = l132 + 1) {
			fVec51[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec2[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec95[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 16384; l135 = l135 + 1) {
			fVec52[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 16384; l136 = l136 + 1) {
			fVec53[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec54[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec94[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec93[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 3; l140 = l140 + 1) {
			fRec92[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 3; l141 = l141 + 1) {
			fRec91[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fVec55[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec90[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 3; l144 = l144 + 1) {
			fRec89[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 3; l145 = l145 + 1) {
			fRec88[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec98[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 3; l147 = l147 + 1) {
			fRec97[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 3; l148 = l148 + 1) {
			fRec96[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec102[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 3; l150 = l150 + 1) {
			fRec101[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 3; l151 = l151 + 1) {
			fRec100[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 3; l152 = l152 + 1) {
			fRec99[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 1024; l153 = l153 + 1) {
			fVec56[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec87[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 16384; l155 = l155 + 1) {
			fVec57[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec58[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec86[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec84[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec104[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 16384; l160 = l160 + 1) {
			fVec59[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fVec60[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec103[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec85[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 16384; l164 = l164 + 1) {
			fVec61[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec62[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec107[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec105[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 16384; l168 = l168 + 1) {
			fVec63[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec64[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec108[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec106[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 16384; l172 = l172 + 1) {
			fVec65[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fVec66[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec111[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec109[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec113[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 16384; l177 = l177 + 1) {
			fVec67[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec68[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec112[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec110[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec117[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 16384; l182 = l182 + 1) {
			fVec69[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fVec70[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec116[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec114[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 16384; l186 = l186 + 1) {
			fVec71[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fVec72[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec118[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec115[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec0[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec1[l191] = 0.0f;
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
	
	_VerbScript* clone() {
		return new _VerbScript();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VerbScript");
		ui_interface->addHorizontalSlider("Damping", &fHslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Diffusion", &fHslider7, FAUSTFLOAT(0.707f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("HF Gain", &fHslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("LF Gain", &fHslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Mod Depth", &fHslider3, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Mod Frequency", &fHslider2, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("ReverbTime", &fHslider6, FAUSTFLOAT(4.2f), FAUSTFLOAT(0.1f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Size", &fHslider1, FAUSTFLOAT(3.5f), FAUSTFLOAT(0.5f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = std::max<float>(0.5f, std::min<float>(5.0f, float(fHslider1)));
		int iSlow2 = itbl0_VerbScriptSIG0[int(134.0f * fSlow1)];
		float fSlow3 = 0.005f * float(iSlow2);
		int iSlow4 = itbl0_VerbScriptSIG0[int(54.0f * fSlow1)];
		float fSlow5 = 0.005f * float(iSlow4);
		int iSlow6 = itbl0_VerbScriptSIG0[int(1e+01f * fSlow1)];
		float fSlow7 = 0.0001f * float(iSlow6);
		int iSlow8 = itbl0_VerbScriptSIG0[int(1.1e+02f * fSlow1)];
		float fSlow9 = 0.0001f * float(iSlow8);
		int iSlow10 = itbl0_VerbScriptSIG0[int(4e+01f * fSlow1)];
		float fSlow11 = 0.0001f * float(iSlow10);
		int iSlow12 = itbl0_VerbScriptSIG0[int(1.4e+02f * fSlow1)];
		float fSlow13 = 0.0001f * float(iSlow12);
		int iSlow14 = itbl0_VerbScriptSIG0[int(7e+01f * fSlow1)];
		float fSlow15 = 0.0001f * float(iSlow14);
		int iSlow16 = itbl0_VerbScriptSIG0[int(1.7e+02f * fSlow1)];
		float fSlow17 = 0.0001f * float(iSlow16);
		int iSlow18 = itbl0_VerbScriptSIG0[int(1e+02f * fSlow1)];
		float fSlow19 = 0.0001f * float(iSlow18);
		int iSlow20 = itbl0_VerbScriptSIG0[int(2e+02f * fSlow1)];
		float fSlow21 = 0.0001f * float(iSlow20);
		int iSlow22 = itbl0_VerbScriptSIG0[int(1.3e+02f * fSlow1)];
		float fSlow23 = 0.0001f * float(iSlow22);
		int iSlow24 = itbl0_VerbScriptSIG0[int(2.3e+02f * fSlow1)];
		float fSlow25 = 0.0001f * float(iSlow24);
		float fSlow26 = fConst21 * std::max<float>(0.0f, std::min<float>(1e+01f, float(fHslider2)));
		float fSlow27 = std::cos(fSlow26);
		float fSlow28 = std::sin(fSlow26);
		float fSlow29 = 5e+01f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3)));
		int iSlow30 = itbl0_VerbScriptSIG0[int(125.0f * fSlow1)];
		float fSlow31 = 0.0001f * float(iSlow30);
		int iSlow32 = itbl0_VerbScriptSIG0[int(204.0f * fSlow1)];
		float fSlow33 = 0.005f * float(iSlow32);
		int iSlow34 = itbl0_VerbScriptSIG0[int(25.0f * fSlow1)];
		float fSlow35 = 0.0001f * float(iSlow34);
		int iSlow36 = itbl0_VerbScriptSIG0[int(155.0f * fSlow1)];
		float fSlow37 = 0.0001f * float(iSlow36);
		int iSlow38 = itbl0_VerbScriptSIG0[int(55.0f * fSlow1)];
		float fSlow39 = 0.0001f * float(iSlow38);
		int iSlow40 = itbl0_VerbScriptSIG0[int(185.0f * fSlow1)];
		float fSlow41 = 0.0001f * float(iSlow40);
		int iSlow42 = itbl0_VerbScriptSIG0[int(85.0f * fSlow1)];
		float fSlow43 = 0.0001f * float(iSlow42);
		int iSlow44 = itbl0_VerbScriptSIG0[int(215.0f * fSlow1)];
		float fSlow45 = 0.0001f * float(iSlow44);
		int iSlow46 = itbl0_VerbScriptSIG0[int(115.0f * fSlow1)];
		float fSlow47 = 0.0001f * float(iSlow46);
		int iSlow48 = itbl0_VerbScriptSIG0[int(245.0f * fSlow1)];
		float fSlow49 = 0.0001f * float(iSlow48);
		int iSlow50 = itbl0_VerbScriptSIG0[int(145.0f * fSlow1)];
		float fSlow51 = 0.0001f * float(iSlow50);
		float fSlow52 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider4)));
		float fSlow53 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider5)));
		float fSlow54 = std::pow(1e+01f, -(0.51f * ((1.25f * fSlow1 + -0.25f) / std::max<float>(0.1f, std::min<float>(12.0f, float(fHslider6))))));
		float fSlow55 = 1.0f - fSlow0;
		float fSlow56 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider7)));
		float fSlow57 = std::sin(fSlow56);
		int iSlow58 = itbl0_VerbScriptSIG0[int(34.0f * fSlow1)];
		float fSlow59 = 0.005f * float(iSlow58);
		float fSlow60 = std::cos(fSlow56);
		int iSlow61 = itbl0_VerbScriptSIG0[int(2.4e+02f * fSlow1)];
		float fSlow62 = 0.0001f * float(iSlow61);
		int iSlow63 = itbl0_VerbScriptSIG0[int(1.9e+02f * fSlow1)];
		float fSlow64 = 0.0001f * float(iSlow63);
		int iSlow65 = itbl0_VerbScriptSIG0[int(175.0f * fSlow1)];
		float fSlow66 = 0.0001f * float(iSlow65);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			int iTemp0 = 1 - iVec0[1];
			fRec10[0] = 0.995f * (fRec10[1] + float(iTemp0 * iSlow2)) + fSlow3;
			float fTemp1 = fRec10[0] + -1.49999f;
			float fTemp2 = std::floor(fTemp1);
			fRec12[0] = 0.995f * (fRec12[1] + float(iTemp0 * iSlow4)) + fSlow5;
			float fTemp3 = fRec12[0] + -1.49999f;
			float fTemp4 = std::floor(fTemp3);
			fRec16[0] = 0.9999f * (fRec16[1] + float(iTemp0 * iSlow6)) + fSlow7;
			float fTemp5 = fRec16[0] + -1.49999f;
			float fTemp6 = std::floor(fTemp5);
			float fTemp7 = fRec16[0] - fTemp6;
			float fTemp8 = fTemp6 + (2.0f - fRec16[0]);
			float fTemp9 = 0.7602446f * fRec1[1];
			float fTemp10 = 0.6496369f * fRec14[1];
			float fTemp11 = 0.7602446f * fRec0[1] - 0.6496369f * fRec13[1];
			fVec1[IOTA0 & 16383] = fTemp11 + (fTemp10 - fTemp9);
			float fTemp12 = fVec1[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp5)))) & 16383];
			fVec2[0] = fTemp12;
			fRec15[0] = 0.70710677f * (fTemp8 * fTemp12 / fTemp7 + fVec2[1]) - fRec15[1] * fTemp8 / fTemp7;
			fRec13[0] = fRec15[0];
			fRec18[0] = 0.9999f * (fRec18[1] + float(iTemp0 * iSlow8)) + fSlow9;
			float fTemp13 = fRec18[0] + -1.49999f;
			float fTemp14 = std::floor(fTemp13);
			float fTemp15 = fRec18[0] - fTemp14;
			float fTemp16 = fTemp14 + (2.0f - fRec18[0]);
			fVec3[IOTA0 & 16383] = fTemp11 + (fTemp9 - fTemp10);
			float fTemp17 = fVec3[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp13)))) & 16383];
			fVec4[0] = fTemp17;
			fRec17[0] = 0.70710677f * (fTemp16 * fTemp17 / fTemp15 + fVec4[1]) - fRec17[1] * fTemp16 / fTemp15;
			fRec14[0] = fRec17[0];
			float fTemp18 = 0.7602446f * fRec13[1] + 0.6496369f * fRec0[1];
			fRec22[0] = 0.9999f * (fRec22[1] + float(iTemp0 * iSlow10)) + fSlow11;
			float fTemp19 = fRec22[0] + -1.49999f;
			float fTemp20 = std::floor(fTemp19);
			float fTemp21 = fRec22[0] - fTemp20;
			float fTemp22 = fTemp20 + (2.0f - fRec22[0]);
			float fTemp23 = 0.7602446f * fRec14[1] + 0.6496369f * fRec1[1];
			float fTemp24 = 0.7602446f * fTemp23;
			float fTemp25 = 0.6496369f * fRec20[1];
			float fTemp26 = 0.7602446f * fTemp18 - 0.6496369f * fRec19[1];
			fVec5[IOTA0 & 16383] = fTemp26 + (fTemp25 - fTemp24);
			float fTemp27 = fVec5[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp19)))) & 16383];
			fVec6[0] = fTemp27;
			fRec21[0] = 0.70710677f * (fTemp22 * fTemp27 / fTemp21 + fVec6[1]) - fRec21[1] * fTemp22 / fTemp21;
			fRec19[0] = fRec21[0];
			fRec24[0] = 0.9999f * (fRec24[1] + float(iTemp0 * iSlow12)) + fSlow13;
			float fTemp28 = fRec24[0] + -1.49999f;
			float fTemp29 = std::floor(fTemp28);
			float fTemp30 = fRec24[0] - fTemp29;
			float fTemp31 = fTemp29 + (2.0f - fRec24[0]);
			fVec7[IOTA0 & 16383] = fTemp26 + (fTemp24 - fTemp25);
			float fTemp32 = fVec7[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp28)))) & 16383];
			fVec8[0] = fTemp32;
			fRec23[0] = 0.70710677f * (fTemp31 * fTemp32 / fTemp30 + fVec8[1]) - fRec23[1] * fTemp31 / fTemp30;
			fRec20[0] = fRec23[0];
			float fTemp33 = 0.7602446f * fRec19[1] + 0.6496369f * fTemp18;
			fRec28[0] = 0.9999f * (fRec28[1] + float(iTemp0 * iSlow14)) + fSlow15;
			float fTemp34 = fRec28[0] + -1.49999f;
			float fTemp35 = std::floor(fTemp34);
			float fTemp36 = fRec28[0] - fTemp35;
			float fTemp37 = fTemp35 + (2.0f - fRec28[0]);
			float fTemp38 = 0.7602446f * fRec20[1] + 0.6496369f * fTemp23;
			float fTemp39 = 0.7602446f * fTemp38;
			float fTemp40 = 0.6496369f * fRec26[1];
			float fTemp41 = 0.7602446f * fTemp33 - 0.6496369f * fRec25[1];
			fVec9[IOTA0 & 16383] = fTemp41 + (fTemp40 - fTemp39);
			float fTemp42 = fVec9[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp34)))) & 16383];
			fVec10[0] = fTemp42;
			fRec27[0] = 0.70710677f * (fTemp37 * fTemp42 / fTemp36 + fVec10[1]) - fRec27[1] * fTemp37 / fTemp36;
			fRec25[0] = fRec27[0];
			fRec30[0] = 0.9999f * (fRec30[1] + float(iTemp0 * iSlow16)) + fSlow17;
			float fTemp43 = fRec30[0] + -1.49999f;
			float fTemp44 = std::floor(fTemp43);
			float fTemp45 = fRec30[0] - fTemp44;
			float fTemp46 = fTemp44 + (2.0f - fRec30[0]);
			fVec11[IOTA0 & 16383] = fTemp41 + (fTemp39 - fTemp40);
			float fTemp47 = fVec11[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp43)))) & 16383];
			fVec12[0] = fTemp47;
			fRec29[0] = 0.70710677f * (fTemp46 * fTemp47 / fTemp45 + fVec12[1]) - fRec29[1] * fTemp46 / fTemp45;
			fRec26[0] = fRec29[0];
			float fTemp48 = 0.7602446f * fRec25[1] + 0.6496369f * fTemp33;
			fRec34[0] = 0.9999f * (fRec34[1] + float(iTemp0 * iSlow18)) + fSlow19;
			float fTemp49 = fRec34[0] + -1.49999f;
			float fTemp50 = std::floor(fTemp49);
			float fTemp51 = fRec34[0] - fTemp50;
			float fTemp52 = fTemp50 + (2.0f - fRec34[0]);
			float fTemp53 = 0.7602446f * fRec26[1] + 0.6496369f * fTemp38;
			float fTemp54 = 0.7602446f * fTemp53;
			float fTemp55 = 0.6496369f * fRec32[1];
			float fTemp56 = 0.7602446f * fTemp48 - 0.6496369f * fRec31[1];
			fVec13[IOTA0 & 16383] = fTemp56 + (fTemp55 - fTemp54);
			float fTemp57 = fVec13[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp49)))) & 16383];
			fVec14[0] = fTemp57;
			fRec33[0] = 0.70710677f * (fTemp52 * fTemp57 / fTemp51 + fVec14[1]) - fRec33[1] * fTemp52 / fTemp51;
			fRec31[0] = fRec33[0];
			fRec36[0] = 0.9999f * (fRec36[1] + float(iTemp0 * iSlow20)) + fSlow21;
			float fTemp58 = fRec36[0] + -1.49999f;
			float fTemp59 = std::floor(fTemp58);
			float fTemp60 = fRec36[0] - fTemp59;
			float fTemp61 = fTemp59 + (2.0f - fRec36[0]);
			fVec15[IOTA0 & 16383] = fTemp56 + (fTemp54 - fTemp55);
			float fTemp62 = fVec15[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp58)))) & 16383];
			fVec16[0] = fTemp62;
			fRec35[0] = 0.70710677f * (fTemp61 * fTemp62 / fTemp60 + fVec16[1]) - fRec35[1] * fTemp61 / fTemp60;
			fRec32[0] = fRec35[0];
			float fTemp63 = 0.7602446f * fRec31[1] + 0.6496369f * fTemp48;
			fRec40[0] = 0.9999f * (fRec40[1] + float(iTemp0 * iSlow22)) + fSlow23;
			float fTemp64 = fRec40[0] + -1.49999f;
			float fTemp65 = std::floor(fTemp64);
			float fTemp66 = fRec40[0] - fTemp65;
			float fTemp67 = fTemp65 + (2.0f - fRec40[0]);
			float fTemp68 = 0.7602446f * fRec32[1] + 0.6496369f * fTemp53;
			float fTemp69 = 0.7602446f * fTemp68;
			float fTemp70 = 0.6496369f * fRec38[1];
			float fTemp71 = 0.7602446f * fTemp63 - 0.6496369f * fRec37[1];
			fVec17[IOTA0 & 16383] = fTemp71 + (fTemp70 - fTemp69);
			float fTemp72 = fVec17[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp64)))) & 16383];
			fVec18[0] = fTemp72;
			fRec39[0] = 0.70710677f * (fTemp67 * fTemp72 / fTemp66 + fVec18[1]) - fRec39[1] * fTemp67 / fTemp66;
			fRec37[0] = fRec39[0];
			fRec42[0] = 0.9999f * (fRec42[1] + float(iTemp0 * iSlow24)) + fSlow25;
			float fTemp73 = fRec42[0] + -1.49999f;
			float fTemp74 = std::floor(fTemp73);
			float fTemp75 = fRec42[0] - fTemp74;
			float fTemp76 = fTemp74 + (2.0f - fRec42[0]);
			fVec19[IOTA0 & 16383] = fTemp71 + (fTemp69 - fTemp70);
			float fTemp77 = fVec19[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp73)))) & 16383];
			fVec20[0] = fTemp77;
			fRec41[0] = 0.70710677f * (fTemp76 * fTemp77 / fTemp75 + fVec20[1]) - fRec41[1] * fTemp76 / fTemp75;
			fRec38[0] = fRec41[0];
			float fTemp78 = 0.7602446f * fRec37[1] + 0.6496369f * fTemp63;
			fVec21[IOTA0 & 1023] = fTemp78;
			fRec43[0] = fSlow28 * fRec44[1] + fSlow27 * fRec43[1];
			fRec44[0] = float(iTemp0) + fSlow27 * fRec44[1] - fSlow28 * fRec43[1];
			float fTemp79 = fSlow29 * (fRec44[0] + 1.0f);
			float fTemp80 = fTemp79 + 3.500005f;
			int iTemp81 = int(fTemp80);
			int iTemp82 = std::min<int>(512, std::max<int>(0, iTemp81 + 4));
			float fTemp83 = std::floor(fTemp80);
			float fTemp84 = fTemp79 + (2.0f - fTemp83);
			float fTemp85 = fTemp79 + (3.0f - fTemp83);
			float fTemp86 = fTemp79 + (4.0f - fTemp83);
			float fTemp87 = fTemp79 + (5.0f - fTemp83);
			float fTemp88 = fTemp87 * fTemp86;
			float fTemp89 = fTemp88 * fTemp85;
			float fTemp90 = fTemp89 * fTemp84;
			int iTemp91 = std::min<int>(512, std::max<int>(0, iTemp81 + 3));
			int iTemp92 = std::min<int>(512, std::max<int>(0, iTemp81 + 2));
			int iTemp93 = std::min<int>(512, std::max<int>(0, iTemp81 + 1));
			int iTemp94 = std::min<int>(512, std::max<int>(0, iTemp81));
			float fTemp95 = fTemp79 + (1.0f - fTemp83);
			fVec22[IOTA0 & 16383] = fTemp95 * (fTemp84 * (fTemp85 * (0.041666668f * fVec21[(IOTA0 - iTemp94) & 1023] * fTemp86 - 0.16666667f * fTemp87 * fVec21[(IOTA0 - iTemp93) & 1023]) + 0.25f * fTemp88 * fVec21[(IOTA0 - iTemp92) & 1023]) - 0.16666667f * fTemp89 * fVec21[(IOTA0 - iTemp91) & 1023]) + 0.041666668f * fTemp90 * fVec21[(IOTA0 - iTemp82) & 1023];
			float fTemp96 = fVec22[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp3)))) & 16383];
			fVec23[0] = fTemp96;
			fRec11[0] = fVec23[1] - (fTemp4 + (2.0f - fRec12[0])) * (fRec11[1] - fTemp96) / (fRec12[0] - fTemp4);
			fRec48[0] = 0.9999f * (fRec48[1] + float(iTemp0 * iSlow30)) + fSlow31;
			float fTemp97 = fRec48[0] + -1.49999f;
			float fTemp98 = std::floor(fTemp97);
			float fTemp99 = fRec48[0] - fTemp98;
			float fTemp100 = fTemp98 + (2.0f - fRec48[0]);
			fRec50[0] = 0.995f * (fRec50[1] + float(iTemp0 * iSlow32)) + fSlow33;
			float fTemp101 = fRec50[0] + -1.49999f;
			float fTemp102 = std::floor(fTemp101);
			float fTemp103 = 0.7602446f * fRec38[1] + 0.6496369f * fTemp68;
			fVec24[IOTA0 & 1023] = fTemp103;
			float fTemp104 = fSlow29 * (1.0f - fRec44[0]);
			float fTemp105 = fTemp104 + 3.500005f;
			int iTemp106 = int(fTemp105);
			float fTemp107 = std::floor(fTemp105);
			float fTemp108 = fTemp104 + (2.0f - fTemp107);
			float fTemp109 = fTemp104 + (3.0f - fTemp107);
			float fTemp110 = fTemp104 + (4.0f - fTemp107);
			float fTemp111 = fTemp104 + (5.0f - fTemp107);
			float fTemp112 = fTemp111 * fTemp110;
			float fTemp113 = fTemp112 * fTemp109;
			fVec25[IOTA0 & 16383] = (fTemp104 + (1.0f - fTemp107)) * (fTemp108 * (fTemp109 * (0.041666668f * fVec24[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp106))) & 1023] * fTemp110 - 0.16666667f * fTemp111 * fVec24[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp106 + 1))) & 1023]) + 0.25f * fTemp112 * fVec24[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp106 + 2))) & 1023]) - 0.16666667f * fTemp113 * fVec24[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp106 + 3))) & 1023]) + 0.041666668f * fTemp113 * fTemp108 * fVec24[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp106 + 4))) & 1023];
			float fTemp114 = fVec25[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp101)))) & 16383];
			fVec26[0] = fTemp114;
			fRec49[0] = fVec26[1] - (fTemp102 + (2.0f - fRec50[0])) * (fRec49[1] - fTemp114) / (fRec50[0] - fTemp102);
			float fTemp115 = 0.7602446f * fRec49[0];
			float fTemp116 = 0.6496369f * fRec46[1];
			float fTemp117 = 0.7602446f * fRec11[0] - 0.6496369f * fRec45[1];
			fVec27[IOTA0 & 16383] = fTemp117 + (fTemp116 - fTemp115);
			float fTemp118 = fVec27[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp97)))) & 16383];
			fVec28[0] = fTemp118;
			fRec47[0] = 0.70710677f * (fTemp100 * fTemp118 / fTemp99 + fVec28[1]) - fRec47[1] * fTemp100 / fTemp99;
			fRec45[0] = fRec47[0];
			fRec52[0] = 0.9999f * (fRec52[1] + float(iTemp0 * iSlow34)) + fSlow35;
			float fTemp119 = fRec52[0] + -1.49999f;
			float fTemp120 = std::floor(fTemp119);
			float fTemp121 = fRec52[0] - fTemp120;
			float fTemp122 = fTemp120 + (2.0f - fRec52[0]);
			fVec29[IOTA0 & 16383] = fTemp117 + (fTemp115 - fTemp116);
			float fTemp123 = fVec29[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp119)))) & 16383];
			fVec30[0] = fTemp123;
			fRec51[0] = 0.70710677f * (fTemp122 * fTemp123 / fTemp121 + fVec30[1]) - fRec51[1] * fTemp122 / fTemp121;
			fRec46[0] = fRec51[0];
			float fTemp124 = 0.7602446f * fRec45[1] + 0.6496369f * fRec11[0];
			fRec56[0] = 0.9999f * (fRec56[1] + float(iTemp0 * iSlow36)) + fSlow37;
			float fTemp125 = fRec56[0] + -1.49999f;
			float fTemp126 = std::floor(fTemp125);
			float fTemp127 = fRec56[0] - fTemp126;
			float fTemp128 = fTemp126 + (2.0f - fRec56[0]);
			float fTemp129 = 0.7602446f * fRec46[1] + 0.6496369f * fRec49[0];
			float fTemp130 = 0.7602446f * fTemp129;
			float fTemp131 = 0.6496369f * fRec54[1];
			float fTemp132 = 0.7602446f * fTemp124 - 0.6496369f * fRec53[1];
			fVec31[IOTA0 & 16383] = fTemp132 + (fTemp131 - fTemp130);
			float fTemp133 = fVec31[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp125)))) & 16383];
			fVec32[0] = fTemp133;
			fRec55[0] = 0.70710677f * (fTemp128 * fTemp133 / fTemp127 + fVec32[1]) - fRec55[1] * fTemp128 / fTemp127;
			fRec53[0] = fRec55[0];
			fRec58[0] = 0.9999f * (fRec58[1] + float(iTemp0 * iSlow38)) + fSlow39;
			float fTemp134 = fRec58[0] + -1.49999f;
			float fTemp135 = std::floor(fTemp134);
			float fTemp136 = fRec58[0] - fTemp135;
			float fTemp137 = fTemp135 + (2.0f - fRec58[0]);
			fVec33[IOTA0 & 16383] = fTemp132 + (fTemp130 - fTemp131);
			int iTemp138 = std::min<int>(8192, std::max<int>(0, int(fTemp134)));
			float fTemp139 = fVec33[(IOTA0 - iTemp138) & 16383];
			fVec34[0] = fTemp139;
			fRec57[0] = 0.70710677f * (fTemp137 * fTemp139 / fTemp136 + fVec34[1]) - fTemp137 * fRec57[1] / fTemp136;
			fRec54[0] = fRec57[0];
			float fTemp140 = 0.7602446f * fRec53[1] + 0.6496369f * fTemp124;
			fRec62[0] = 0.9999f * (fRec62[1] + float(iTemp0 * iSlow40)) + fSlow41;
			float fTemp141 = fRec62[0] + -1.49999f;
			float fTemp142 = std::floor(fTemp141);
			float fTemp143 = fRec62[0] - fTemp142;
			float fTemp144 = fTemp142 + (2.0f - fRec62[0]);
			float fTemp145 = 0.7602446f * fRec54[1] + 0.6496369f * fTemp129;
			float fTemp146 = 0.7602446f * fTemp145;
			float fTemp147 = 0.6496369f * fRec60[1];
			float fTemp148 = 0.7602446f * fTemp140 - 0.6496369f * fRec59[1];
			fVec35[IOTA0 & 16383] = fTemp148 + (fTemp147 - fTemp146);
			float fTemp149 = fVec35[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp141)))) & 16383];
			fVec36[0] = fTemp149;
			fRec61[0] = 0.70710677f * (fTemp144 * fTemp149 / fTemp143 + fVec36[1]) - fRec61[1] * fTemp144 / fTemp143;
			fRec59[0] = fRec61[0];
			fRec64[0] = 0.9999f * (fRec64[1] + float(iTemp0 * iSlow42)) + fSlow43;
			float fTemp150 = fRec64[0] + -1.49999f;
			float fTemp151 = std::floor(fTemp150);
			float fTemp152 = fRec64[0] - fTemp151;
			float fTemp153 = fTemp151 + (2.0f - fRec64[0]);
			fVec37[IOTA0 & 16383] = fTemp148 + (fTemp146 - fTemp147);
			int iTemp154 = std::min<int>(8192, std::max<int>(0, int(fTemp150)));
			float fTemp155 = fVec37[(IOTA0 - iTemp154) & 16383];
			fVec38[0] = fTemp155;
			fRec63[0] = 0.70710677f * (fTemp153 * fTemp155 / fTemp152 + fVec38[1]) - fRec63[1] * fTemp153 / fTemp152;
			fRec60[0] = fRec63[0];
			float fTemp156 = 0.7602446f * fRec59[1] + 0.6496369f * fTemp140;
			fRec68[0] = 0.9999f * (fRec68[1] + float(iTemp0 * iSlow44)) + fSlow45;
			float fTemp157 = fRec68[0] + -1.49999f;
			float fTemp158 = std::floor(fTemp157);
			float fTemp159 = fRec68[0] - fTemp158;
			float fTemp160 = fTemp158 + (2.0f - fRec68[0]);
			float fTemp161 = 0.7602446f * fRec60[1] + 0.6496369f * fTemp145;
			float fTemp162 = 0.7602446f * fTemp161;
			float fTemp163 = 0.6496369f * fRec66[1];
			float fTemp164 = 0.7602446f * fTemp156 - 0.6496369f * fRec65[1];
			fVec39[IOTA0 & 16383] = fTemp164 + (fTemp163 - fTemp162);
			int iTemp165 = std::min<int>(8192, std::max<int>(0, int(fTemp157)));
			float fTemp166 = fVec39[(IOTA0 - iTemp165) & 16383];
			fVec40[0] = fTemp166;
			fRec67[0] = 0.70710677f * (fTemp160 * fTemp166 / fTemp159 + fVec40[1]) - fTemp160 * fRec67[1] / fTemp159;
			fRec65[0] = fRec67[0];
			fRec70[0] = 0.9999f * (fRec70[1] + float(iTemp0 * iSlow46)) + fSlow47;
			float fTemp167 = fRec70[0] + -1.49999f;
			float fTemp168 = std::floor(fTemp167);
			float fTemp169 = fRec70[0] - fTemp168;
			float fTemp170 = fTemp168 + (2.0f - fRec70[0]);
			fVec41[IOTA0 & 16383] = fTemp164 + (fTemp162 - fTemp163);
			int iTemp171 = std::min<int>(8192, std::max<int>(0, int(fTemp167)));
			float fTemp172 = fVec41[(IOTA0 - iTemp171) & 16383];
			fVec42[0] = fTemp172;
			fRec69[0] = 0.70710677f * (fTemp170 * fTemp172 / fTemp169 + fVec42[1]) - fTemp170 * fRec69[1] / fTemp169;
			fRec66[0] = fRec69[0];
			float fTemp173 = 0.7602446f * fRec65[1] + 0.6496369f * fTemp156;
			fRec74[0] = 0.9999f * (fRec74[1] + float(iTemp0 * iSlow48)) + fSlow49;
			float fTemp174 = fRec74[0] + -1.49999f;
			float fTemp175 = std::floor(fTemp174);
			float fTemp176 = fRec74[0] - fTemp175;
			float fTemp177 = fTemp175 + (2.0f - fRec74[0]);
			float fTemp178 = 0.7602446f * fRec66[1] + 0.6496369f * fTemp161;
			float fTemp179 = 0.7602446f * fTemp178;
			float fTemp180 = 0.6496369f * fRec72[1];
			float fTemp181 = 0.7602446f * fTemp173 - 0.6496369f * fRec71[1];
			fVec43[IOTA0 & 16383] = fTemp181 + (fTemp180 - fTemp179);
			float fTemp182 = fVec43[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp174)))) & 16383];
			fVec44[0] = fTemp182;
			fRec73[0] = 0.70710677f * (fTemp177 * fTemp182 / fTemp176 + fVec44[1]) - fRec73[1] * fTemp177 / fTemp176;
			fRec71[0] = fRec73[0];
			fRec76[0] = 0.9999f * (fRec76[1] + float(iTemp0 * iSlow50)) + fSlow51;
			float fTemp183 = fRec76[0] + -1.49999f;
			float fTemp184 = std::floor(fTemp183);
			float fTemp185 = fRec76[0] - fTemp184;
			float fTemp186 = fTemp184 + (2.0f - fRec76[0]);
			fVec45[IOTA0 & 16383] = fTemp181 + (fTemp179 - fTemp180);
			int iTemp187 = std::min<int>(8192, std::max<int>(0, int(fTemp183)));
			float fTemp188 = fVec45[(IOTA0 - iTemp187) & 16383];
			fVec46[0] = fTemp188;
			fRec75[0] = 0.70710677f * (fTemp186 * fTemp188 / fTemp185 + fVec46[1]) - fRec75[1] * fTemp186 / fTemp185;
			fRec72[0] = fRec75[0];
			float fTemp189 = 0.7602446f * fRec71[1] + 0.6496369f * fTemp173;
			fVec47[IOTA0 & 16383] = fTemp189;
			float fTemp190 = fSlow29 * (fRec43[0] + 1.0f);
			float fTemp191 = fTemp190 + 3.500005f;
			int iTemp192 = int(fTemp191);
			int iTemp193 = std::max<int>(0, iTemp192 + 4);
			float fTemp194 = std::floor(fTemp191);
			float fTemp195 = fTemp190 + (2.0f - fTemp194);
			float fTemp196 = fTemp190 + (3.0f - fTemp194);
			float fTemp197 = fTemp190 + (4.0f - fTemp194);
			float fTemp198 = fTemp190 + (5.0f - fTemp194);
			float fTemp199 = fTemp198 * fTemp197;
			float fTemp200 = fTemp199 * fTemp196;
			float fTemp201 = fTemp200 * fTemp195;
			int iTemp202 = std::max<int>(0, iTemp192 + 3);
			int iTemp203 = std::max<int>(0, iTemp192 + 2);
			int iTemp204 = std::max<int>(0, iTemp192 + 1);
			int iTemp205 = std::max<int>(0, iTemp192);
			float fTemp206 = fTemp190 + (1.0f - fTemp194);
			fVec48[IOTA0 & 16383] = fTemp206 * (fTemp195 * (fTemp196 * (0.041666668f * fVec47[(IOTA0 - std::min<int>(8192, iTemp205)) & 16383] * fTemp197 - 0.16666667f * fTemp198 * fVec47[(IOTA0 - std::min<int>(8192, iTemp204)) & 16383]) + 0.25f * fTemp199 * fVec47[(IOTA0 - std::min<int>(8192, iTemp203)) & 16383]) - 0.16666667f * fTemp200 * fVec47[(IOTA0 - std::min<int>(8192, iTemp202)) & 16383]) + 0.041666668f * fTemp201 * fVec47[(IOTA0 - std::min<int>(8192, iTemp193)) & 16383];
			float fTemp207 = fVec48[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp1)))) & 16383];
			fVec49[0] = fTemp207;
			fRec9[0] = fVec49[1] - (fTemp2 + (2.0f - fRec10[0])) * (fRec9[1] - fTemp207) / (fRec10[0] - fTemp2);
			fRec8[0] = -(fConst23 * (fConst22 * fRec8[1] - (fRec9[0] + fRec9[1])));
			fRec7[0] = fRec8[0] - fConst20 * (fConst18 * fRec7[2] + fConst13 * fRec7[1]);
			fRec6[0] = fConst20 * (fRec7[2] + fRec7[0] + 2.0f * fRec7[1]) - fConst17 * (fConst15 * fRec6[2] + fConst13 * fRec6[1]);
			float fTemp208 = fRec6[2] + fRec6[0] + 2.0f * fRec6[1];
			fVec50[0] = fTemp208;
			fRec5[0] = -(fConst25 * (fConst24 * fRec5[1] - fConst17 * (fTemp208 + fVec50[1])));
			fRec4[0] = fRec5[0] - fConst10 * (fConst8 * fRec4[2] + fConst4 * fRec4[1]);
			fRec3[0] = fConst10 * (fRec4[2] + fRec4[0] + 2.0f * fRec4[1]) - fConst7 * (fConst6 * fRec3[2] + fConst4 * fRec3[1]);
			fRec79[0] = -(fConst25 * (fConst24 * fRec79[1] + fConst26 * (fVec50[1] - fTemp208)));
			fRec78[0] = fRec79[0] - fConst10 * (fConst8 * fRec78[2] + fConst4 * fRec78[1]);
			fRec77[0] = fConst27 * (fRec78[2] + (fRec78[0] - 2.0f * fRec78[1])) - fConst7 * (fConst6 * fRec77[2] + fConst4 * fRec77[1]);
			float fTemp209 = fConst4 * fRec80[1];
			fRec83[0] = -(fConst23 * (fConst22 * fRec83[1] - fConst14 * (fRec9[0] - fRec9[1])));
			fRec82[0] = fRec83[0] - fConst20 * (fConst18 * fRec82[2] + fConst13 * fRec82[1]);
			fRec81[0] = fConst30 * (fRec82[2] + (fRec82[0] - 2.0f * fRec82[1])) - fConst17 * (fConst15 * fRec81[2] + fConst13 * fRec81[1]);
			fRec80[0] = fConst31 * (fRec81[2] + (fRec81[0] - 2.0f * fRec81[1])) - fConst29 * (fConst28 * fRec80[2] + fTemp209);
			float fTemp210 = float(input0[i0]) + fSlow54 * (fSlow53 * (fRec80[2] + fConst29 * (fTemp209 + fConst28 * fRec80[0])) + fConst7 * (fConst3 * (fRec77[2] + (fRec77[0] - 2.0f * fRec77[1])) + fSlow52 * (fRec3[2] + fRec3[0] + 2.0f * fRec3[1])));
			fVec51[IOTA0 & 1023] = fTemp210;
			fRec2[0] = fSlow55 * (fTemp206 * (fTemp195 * (fTemp196 * (0.041666668f * fTemp197 * fVec51[(IOTA0 - std::min<int>(512, iTemp205)) & 1023] - 0.16666667f * fTemp198 * fVec51[(IOTA0 - std::min<int>(512, iTemp204)) & 1023]) + 0.25f * fTemp199 * fVec51[(IOTA0 - std::min<int>(512, iTemp203)) & 1023]) - 0.16666667f * fTemp200 * fVec51[(IOTA0 - std::min<int>(512, iTemp202)) & 1023]) + 0.041666668f * fTemp201 * fVec51[(IOTA0 - std::min<int>(512, iTemp193)) & 1023]) + fSlow0 * fRec2[1];
			fRec95[0] = 0.995f * (fRec95[1] + float(iTemp0 * iSlow58)) + fSlow59;
			float fTemp211 = fRec95[0] + -1.49999f;
			float fTemp212 = std::floor(fTemp211);
			float fTemp213 = 0.7602446f * fRec72[1] + 0.6496369f * fTemp178;
			fVec52[IOTA0 & 16383] = fTemp213;
			float fTemp214 = fSlow29 * (1.0f - fRec43[0]);
			float fTemp215 = fTemp214 + 3.500005f;
			int iTemp216 = int(fTemp215);
			float fTemp217 = std::floor(fTemp215);
			float fTemp218 = fTemp214 + (2.0f - fTemp217);
			float fTemp219 = fTemp214 + (3.0f - fTemp217);
			float fTemp220 = fTemp214 + (4.0f - fTemp217);
			float fTemp221 = fTemp214 + (5.0f - fTemp217);
			float fTemp222 = fTemp221 * fTemp220;
			float fTemp223 = fTemp222 * fTemp219;
			fVec53[IOTA0 & 16383] = (fTemp214 + (1.0f - fTemp217)) * (fTemp218 * (fTemp219 * (0.041666668f * fVec52[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp216))) & 16383] * fTemp220 - 0.16666667f * fTemp221 * fVec52[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp216 + 1))) & 16383]) + 0.25f * fTemp222 * fVec52[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp216 + 2))) & 16383]) - 0.16666667f * fTemp223 * fVec52[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp216 + 3))) & 16383]) + 0.041666668f * fTemp223 * fTemp218 * fVec52[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp216 + 4))) & 16383];
			float fTemp224 = fVec53[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp211)))) & 16383];
			fVec54[0] = fTemp224;
			fRec94[0] = fVec54[1] - (fTemp212 + (2.0f - fRec95[0])) * (fRec94[1] - fTemp224) / (fRec95[0] - fTemp212);
			fRec93[0] = fConst23 * (fRec94[0] + fRec94[1] - fConst22 * fRec93[1]);
			fRec92[0] = fRec93[0] - fConst20 * (fConst18 * fRec92[2] + fConst13 * fRec92[1]);
			fRec91[0] = fConst20 * (fRec92[2] + fRec92[0] + 2.0f * fRec92[1]) - fConst17 * (fConst15 * fRec91[2] + fConst13 * fRec91[1]);
			float fTemp225 = fRec91[2] + fRec91[0] + 2.0f * fRec91[1];
			fVec55[0] = fTemp225;
			fRec90[0] = fConst25 * (fConst17 * (fTemp225 + fVec55[1]) - fConst24 * fRec90[1]);
			fRec89[0] = fRec90[0] - fConst10 * (fConst8 * fRec89[2] + fConst4 * fRec89[1]);
			fRec88[0] = fConst10 * (fRec89[2] + fRec89[0] + 2.0f * fRec89[1]) - fConst7 * (fConst6 * fRec88[2] + fConst4 * fRec88[1]);
			fRec98[0] = -(fConst25 * (fConst24 * fRec98[1] - fConst26 * (fTemp225 - fVec55[1])));
			fRec97[0] = fRec98[0] - fConst10 * (fConst8 * fRec97[2] + fConst4 * fRec97[1]);
			fRec96[0] = fConst27 * (fRec97[2] + (fRec97[0] - 2.0f * fRec97[1])) - fConst7 * (fConst6 * fRec96[2] + fConst4 * fRec96[1]);
			float fTemp226 = fConst4 * fRec99[1];
			fRec102[0] = -(fConst23 * (fConst22 * fRec102[1] - fConst14 * (fRec94[0] - fRec94[1])));
			fRec101[0] = fRec102[0] - fConst20 * (fConst18 * fRec101[2] + fConst13 * fRec101[1]);
			fRec100[0] = fConst30 * (fRec101[2] + (fRec101[0] - 2.0f * fRec101[1])) - fConst17 * (fConst15 * fRec100[2] + fConst13 * fRec100[1]);
			fRec99[0] = fConst31 * (fRec100[2] + (fRec100[0] - 2.0f * fRec100[1])) - fConst29 * (fConst28 * fRec99[2] + fTemp226);
			float fTemp227 = float(input1[i0]) + fSlow54 * (fSlow53 * (fRec99[2] + fConst29 * (fTemp226 + fConst28 * fRec99[0])) + fConst7 * (fConst3 * (fRec96[2] + (fRec96[0] - 2.0f * fRec96[1])) + fSlow52 * (fRec88[2] + fRec88[0] + 2.0f * fRec88[1])));
			fVec56[IOTA0 & 1023] = fTemp227;
			fRec87[0] = fSlow55 * (fTemp95 * (fTemp84 * (fTemp85 * (0.041666668f * fTemp86 * fVec56[(IOTA0 - iTemp94) & 1023] - 0.16666667f * fTemp87 * fVec56[(IOTA0 - iTemp93) & 1023]) + 0.25f * fTemp88 * fVec56[(IOTA0 - iTemp92) & 1023]) - 0.16666667f * fTemp89 * fVec56[(IOTA0 - iTemp91) & 1023]) + 0.041666668f * fTemp90 * fVec56[(IOTA0 - iTemp82) & 1023]) + fSlow0 * fRec87[1];
			float fTemp228 = fSlow60 * fRec87[0];
			float fTemp229 = fSlow57 * fRec85[1];
			float fTemp230 = fSlow60 * fRec2[0] - fSlow57 * fRec84[1];
			fVec57[IOTA0 & 16383] = fTemp230 + (fTemp229 - fTemp228);
			float fTemp231 = fVec57[(IOTA0 - iTemp138) & 16383];
			fVec58[0] = fTemp231;
			fRec86[0] = 0.70710677f * (fTemp137 * fTemp231 / fTemp136 + fVec58[1]) - fRec86[1] * fTemp137 / fTemp136;
			fRec84[0] = fRec86[0];
			fRec104[0] = 0.9999f * (fRec104[1] + float(iTemp0 * iSlow61)) + fSlow62;
			float fTemp232 = fRec104[0] + -1.49999f;
			float fTemp233 = std::floor(fTemp232);
			float fTemp234 = fRec104[0] - fTemp233;
			float fTemp235 = fTemp233 + (2.0f - fRec104[0]);
			fVec59[IOTA0 & 16383] = fTemp230 + (fTemp228 - fTemp229);
			float fTemp236 = fVec59[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp232)))) & 16383];
			fVec60[0] = fTemp236;
			fRec103[0] = 0.70710677f * (fTemp235 * fTemp236 / fTemp234 + fVec60[1]) - fRec103[1] * fTemp235 / fTemp234;
			fRec85[0] = fRec103[0];
			float fTemp237 = fSlow60 * fRec84[1] + fSlow57 * fRec2[0];
			float fTemp238 = fSlow60 * fRec85[1] + fSlow57 * fRec87[0];
			float fTemp239 = fSlow60 * fTemp238;
			float fTemp240 = fSlow57 * fRec106[1];
			float fTemp241 = fSlow60 * fTemp237 - fSlow57 * fRec105[1];
			fVec61[IOTA0 & 16383] = fTemp241 + (fTemp240 - fTemp239);
			float fTemp242 = fVec61[(IOTA0 - iTemp165) & 16383];
			fVec62[0] = fTemp242;
			fRec107[0] = 0.70710677f * (fTemp160 * fTemp242 / fTemp159 + fVec62[1]) - fRec107[1] * fTemp160 / fTemp159;
			fRec105[0] = fRec107[0];
			fVec63[IOTA0 & 16383] = fTemp241 + (fTemp239 - fTemp240);
			float fTemp243 = fVec63[(IOTA0 - iTemp154) & 16383];
			fVec64[0] = fTemp243;
			fRec108[0] = 0.70710677f * (fTemp153 * fTemp243 / fTemp152 + fVec64[1]) - fTemp153 * fRec108[1] / fTemp152;
			fRec106[0] = fRec108[0];
			float fTemp244 = fSlow60 * fRec105[1] + fSlow57 * fTemp237;
			float fTemp245 = fSlow60 * fRec106[1] + fSlow57 * fTemp238;
			float fTemp246 = fSlow60 * fTemp245;
			float fTemp247 = fSlow57 * fRec110[1];
			float fTemp248 = fSlow60 * fTemp244 - fSlow57 * fRec109[1];
			fVec65[IOTA0 & 16383] = fTemp248 + (fTemp247 - fTemp246);
			float fTemp249 = fVec65[(IOTA0 - iTemp171) & 16383];
			fVec66[0] = fTemp249;
			fRec111[0] = 0.70710677f * (fTemp170 * fTemp249 / fTemp169 + fVec66[1]) - fRec111[1] * fTemp170 / fTemp169;
			fRec109[0] = fRec111[0];
			fRec113[0] = 0.9999f * (fRec113[1] + float(iTemp0 * iSlow63)) + fSlow64;
			float fTemp250 = fRec113[0] + -1.49999f;
			float fTemp251 = std::floor(fTemp250);
			float fTemp252 = fRec113[0] - fTemp251;
			float fTemp253 = fTemp251 + (2.0f - fRec113[0]);
			fVec67[IOTA0 & 16383] = fTemp248 + (fTemp246 - fTemp247);
			float fTemp254 = fVec67[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp250)))) & 16383];
			fVec68[0] = fTemp254;
			fRec112[0] = 0.70710677f * (fTemp253 * fTemp254 / fTemp252 + fVec68[1]) - fRec112[1] * fTemp253 / fTemp252;
			fRec110[0] = fRec112[0];
			float fTemp255 = fSlow60 * fRec109[1] + fSlow57 * fTemp244;
			fRec117[0] = 0.9999f * (fRec117[1] + float(iTemp0 * iSlow65)) + fSlow66;
			float fTemp256 = fRec117[0] + -1.49999f;
			float fTemp257 = std::floor(fTemp256);
			float fTemp258 = fRec117[0] - fTemp257;
			float fTemp259 = fTemp257 + (2.0f - fRec117[0]);
			float fTemp260 = fSlow60 * fRec110[1] + fSlow57 * fTemp245;
			float fTemp261 = fSlow60 * fTemp260;
			float fTemp262 = fSlow57 * fRec115[1];
			float fTemp263 = fSlow60 * fTemp255 - fSlow57 * fRec114[1];
			fVec69[IOTA0 & 16383] = fTemp263 + (fTemp262 - fTemp261);
			float fTemp264 = fVec69[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp256)))) & 16383];
			fVec70[0] = fTemp264;
			fRec116[0] = 0.70710677f * (fTemp259 * fTemp264 / fTemp258 + fVec70[1]) - fRec116[1] * fTemp259 / fTemp258;
			fRec114[0] = fRec116[0];
			fVec71[IOTA0 & 16383] = fTemp263 + (fTemp261 - fTemp262);
			float fTemp265 = fVec71[(IOTA0 - iTemp187) & 16383];
			fVec72[0] = fTemp265;
			fRec118[0] = 0.70710677f * (fTemp186 * fTemp265 / fTemp185 + fVec72[1]) - fTemp186 * fRec118[1] / fTemp185;
			fRec115[0] = fRec118[0];
			fRec0[0] = fSlow60 * fRec114[1] + fSlow57 * fTemp255;
			fRec1[0] = fSlow60 * fRec115[1] + fSlow57 * fTemp260;
			output0[i0] = FAUSTFLOAT(fRec0[0]);
			output1[i0] = FAUSTFLOAT(fRec1[0]);
			iVec0[1] = iVec0[0];
			fRec10[1] = fRec10[0];
			fRec12[1] = fRec12[0];
			fRec16[1] = fRec16[0];
			IOTA0 = IOTA0 + 1;
			fVec2[1] = fVec2[0];
			fRec15[1] = fRec15[0];
			fRec13[1] = fRec13[0];
			fRec18[1] = fRec18[0];
			fVec4[1] = fVec4[0];
			fRec17[1] = fRec17[0];
			fRec14[1] = fRec14[0];
			fRec22[1] = fRec22[0];
			fVec6[1] = fVec6[0];
			fRec21[1] = fRec21[0];
			fRec19[1] = fRec19[0];
			fRec24[1] = fRec24[0];
			fVec8[1] = fVec8[0];
			fRec23[1] = fRec23[0];
			fRec20[1] = fRec20[0];
			fRec28[1] = fRec28[0];
			fVec10[1] = fVec10[0];
			fRec27[1] = fRec27[0];
			fRec25[1] = fRec25[0];
			fRec30[1] = fRec30[0];
			fVec12[1] = fVec12[0];
			fRec29[1] = fRec29[0];
			fRec26[1] = fRec26[0];
			fRec34[1] = fRec34[0];
			fVec14[1] = fVec14[0];
			fRec33[1] = fRec33[0];
			fRec31[1] = fRec31[0];
			fRec36[1] = fRec36[0];
			fVec16[1] = fVec16[0];
			fRec35[1] = fRec35[0];
			fRec32[1] = fRec32[0];
			fRec40[1] = fRec40[0];
			fVec18[1] = fVec18[0];
			fRec39[1] = fRec39[0];
			fRec37[1] = fRec37[0];
			fRec42[1] = fRec42[0];
			fVec20[1] = fVec20[0];
			fRec41[1] = fRec41[0];
			fRec38[1] = fRec38[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fVec23[1] = fVec23[0];
			fRec11[1] = fRec11[0];
			fRec48[1] = fRec48[0];
			fRec50[1] = fRec50[0];
			fVec26[1] = fVec26[0];
			fRec49[1] = fRec49[0];
			fVec28[1] = fVec28[0];
			fRec47[1] = fRec47[0];
			fRec45[1] = fRec45[0];
			fRec52[1] = fRec52[0];
			fVec30[1] = fVec30[0];
			fRec51[1] = fRec51[0];
			fRec46[1] = fRec46[0];
			fRec56[1] = fRec56[0];
			fVec32[1] = fVec32[0];
			fRec55[1] = fRec55[0];
			fRec53[1] = fRec53[0];
			fRec58[1] = fRec58[0];
			fVec34[1] = fVec34[0];
			fRec57[1] = fRec57[0];
			fRec54[1] = fRec54[0];
			fRec62[1] = fRec62[0];
			fVec36[1] = fVec36[0];
			fRec61[1] = fRec61[0];
			fRec59[1] = fRec59[0];
			fRec64[1] = fRec64[0];
			fVec38[1] = fVec38[0];
			fRec63[1] = fRec63[0];
			fRec60[1] = fRec60[0];
			fRec68[1] = fRec68[0];
			fVec40[1] = fVec40[0];
			fRec67[1] = fRec67[0];
			fRec65[1] = fRec65[0];
			fRec70[1] = fRec70[0];
			fVec42[1] = fVec42[0];
			fRec69[1] = fRec69[0];
			fRec66[1] = fRec66[0];
			fRec74[1] = fRec74[0];
			fVec44[1] = fVec44[0];
			fRec73[1] = fRec73[0];
			fRec71[1] = fRec71[0];
			fRec76[1] = fRec76[0];
			fVec46[1] = fVec46[0];
			fRec75[1] = fRec75[0];
			fRec72[1] = fRec72[0];
			fVec49[1] = fVec49[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fVec50[1] = fVec50[0];
			fRec5[1] = fRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec79[1] = fRec79[0];
			fRec78[2] = fRec78[1];
			fRec78[1] = fRec78[0];
			fRec77[2] = fRec77[1];
			fRec77[1] = fRec77[0];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fRec2[1] = fRec2[0];
			fRec95[1] = fRec95[0];
			fVec54[1] = fVec54[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fRec91[2] = fRec91[1];
			fRec91[1] = fRec91[0];
			fVec55[1] = fVec55[0];
			fRec90[1] = fRec90[0];
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fRec88[2] = fRec88[1];
			fRec88[1] = fRec88[0];
			fRec98[1] = fRec98[0];
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fRec96[2] = fRec96[1];
			fRec96[1] = fRec96[0];
			fRec102[1] = fRec102[0];
			fRec101[2] = fRec101[1];
			fRec101[1] = fRec101[0];
			fRec100[2] = fRec100[1];
			fRec100[1] = fRec100[0];
			fRec99[2] = fRec99[1];
			fRec99[1] = fRec99[0];
			fRec87[1] = fRec87[0];
			fVec58[1] = fVec58[0];
			fRec86[1] = fRec86[0];
			fRec84[1] = fRec84[0];
			fRec104[1] = fRec104[0];
			fVec60[1] = fVec60[0];
			fRec103[1] = fRec103[0];
			fRec85[1] = fRec85[0];
			fVec62[1] = fVec62[0];
			fRec107[1] = fRec107[0];
			fRec105[1] = fRec105[0];
			fVec64[1] = fVec64[0];
			fRec108[1] = fRec108[0];
			fRec106[1] = fRec106[0];
			fVec66[1] = fVec66[0];
			fRec111[1] = fRec111[0];
			fRec109[1] = fRec109[0];
			fRec113[1] = fRec113[0];
			fVec68[1] = fVec68[0];
			fRec112[1] = fRec112[0];
			fRec110[1] = fRec110[0];
			fRec117[1] = fRec117[0];
			fVec70[1] = fVec70[0];
			fRec116[1] = fRec116[0];
			fRec114[1] = fRec114[0];
			fVec72[1] = fVec72[0];
			fRec118[1] = fRec118[0];
			fRec115[1] = fRec115[0];
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "VerbScript.dsp"
	#define FAUST_CLASS_NAME "_VerbScript"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _VerbScript -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 8
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("Damping", fHslider0, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Diffusion", fHslider7, 0.707f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("HF Gain", fHslider5, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("LF Gain", fHslider4, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Mod Depth", fHslider3, 0.1f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Mod Frequency", fHslider2, 0.1f, 0.0f, 1e+01f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("ReverbTime", fHslider6, 4.2f, 0.1f, 12.0f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("Size", fHslider1, 3.5f, 0.5f, 5.0f, 0.01f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Damping, "Damping", fHslider0, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Diffusion, "Diffusion", fHslider7, 0.707f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, HF_Gain, "HF Gain", fHslider5, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, LF_Gain, "LF Gain", fHslider4, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Mod_Depth, "Mod Depth", fHslider3, 0.1f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Mod_Frequency, "Mod Frequency", fHslider2, 0.1f, 0.0f, 1e+01f, 0.01f) \
		p(HORIZONTALSLIDER, ReverbTime, "ReverbTime", fHslider6, 4.2f, 0.1f, 12.0f, 0.1f) \
		p(HORIZONTALSLIDER, Size, "Size", fHslider1, 3.5f, 0.5f, 5.0f, 0.01f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
