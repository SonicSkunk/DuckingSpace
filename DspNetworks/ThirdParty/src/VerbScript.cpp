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
static float _VerbScript_faustpower3_f(float value) {
	return value * value * value;
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
	FAUSTFLOAT fHslider1;
	float fRec9[2];
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fRec12[3];
	int IOTA0;
	float fVec1[4096];
	int iConst10;
	float fConst11;
	float fVec2[1024];
	int iConst12;
	float fRec10[2];
	float fVec3[1024];
	int iConst13;
	float fRec7[2];
	float fVec4[4096];
	int iConst14;
	float fRec5[2];
	float fVec5[2048];
	int iConst15;
	float fRec3[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fConst29;
	float fConst30;
	float fConst31;
	float fConst32;
	float fConst33;
	float fConst34;
	float fConst35;
	float fConst36;
	float fRec20[2];
	float fRec22[2];
	float fRec26[2];
	float fVec6[16384];
	float fVec7[2];
	float fRec25[2];
	float fRec23[2];
	float fRec28[2];
	float fVec8[16384];
	float fVec9[2];
	float fRec27[2];
	float fRec24[2];
	float fRec32[2];
	float fVec10[16384];
	float fVec11[2];
	float fRec31[2];
	float fRec29[2];
	float fRec34[2];
	float fVec12[16384];
	float fVec13[2];
	float fRec33[2];
	float fRec30[2];
	float fRec38[2];
	float fVec14[16384];
	float fVec15[2];
	float fRec37[2];
	float fRec35[2];
	float fRec40[2];
	float fVec16[16384];
	float fVec17[2];
	float fRec39[2];
	float fRec36[2];
	float fRec44[2];
	float fVec18[16384];
	float fVec19[2];
	float fRec43[2];
	float fRec41[2];
	float fRec46[2];
	float fVec20[16384];
	float fVec21[2];
	float fRec45[2];
	float fRec42[2];
	float fRec50[2];
	float fVec22[16384];
	float fVec23[2];
	float fRec49[2];
	float fRec47[2];
	float fRec52[2];
	float fVec24[16384];
	float fVec25[2];
	float fRec51[2];
	float fRec48[2];
	float fVec26[1024];
	float fConst37;
	float fConst38;
	float fConst39;
	float fRec53[2];
	float fRec54[2];
	FAUSTFLOAT fHslider4;
	float fConst40;
	float fRec55[2];
	float fVec27[16384];
	float fVec28[2];
	float fRec21[2];
	float fRec59[2];
	float fRec61[2];
	float fVec29[1024];
	float fVec30[16384];
	float fVec31[2];
	float fRec60[2];
	float fVec32[16384];
	float fVec33[2];
	float fRec58[2];
	float fRec56[2];
	float fRec63[2];
	float fVec34[16384];
	float fVec35[2];
	float fRec62[2];
	float fRec57[2];
	float fRec67[2];
	float fVec36[16384];
	float fVec37[2];
	float fRec66[2];
	float fRec64[2];
	float fRec69[2];
	float fVec38[16384];
	float fVec39[2];
	float fRec68[2];
	float fRec65[2];
	float fRec73[2];
	float fVec40[16384];
	float fVec41[2];
	float fRec72[2];
	float fRec70[2];
	float fRec75[2];
	float fVec42[16384];
	float fVec43[2];
	float fRec74[2];
	float fRec71[2];
	float fRec79[2];
	float fVec44[16384];
	float fVec45[2];
	float fRec78[2];
	float fRec76[2];
	float fRec81[2];
	float fVec46[16384];
	float fVec47[2];
	float fRec80[2];
	float fRec77[2];
	float fRec85[2];
	float fVec48[16384];
	float fVec49[2];
	float fRec84[2];
	float fRec82[2];
	float fRec87[2];
	float fVec50[16384];
	float fVec51[2];
	float fRec86[2];
	float fRec83[2];
	float fVec52[16384];
	float fVec53[16384];
	float fVec54[2];
	float fRec19[2];
	float fConst41;
	float fConst42;
	float fRec18[2];
	float fRec17[3];
	float fRec16[3];
	float fVec55[2];
	float fConst43;
	float fRec15[2];
	float fRec14[3];
	float fRec13[3];
	float fConst44;
	float fRec90[2];
	float fRec89[3];
	float fConst45;
	float fRec88[3];
	float fConst46;
	float fConst47;
	float fRec94[2];
	float fRec93[3];
	float fConst48;
	float fRec92[3];
	float fConst49;
	float fRec91[3];
	float fVec56[1024];
	float fRec2[2];
	float fRec107[3];
	float fVec57[4096];
	float fVec58[1024];
	int iConst50;
	float fRec105[2];
	float fVec59[1024];
	int iConst51;
	float fRec103[2];
	float fVec60[4096];
	int iConst52;
	float fRec101[2];
	float fVec61[2048];
	int iConst53;
	float fRec99[2];
	float fRec115[2];
	float fVec62[16384];
	float fVec63[16384];
	float fVec64[2];
	float fRec114[2];
	float fRec113[2];
	float fRec112[3];
	float fRec111[3];
	float fVec65[2];
	float fRec110[2];
	float fRec109[3];
	float fRec108[3];
	float fRec118[2];
	float fRec117[3];
	float fRec116[3];
	float fRec122[2];
	float fRec121[3];
	float fRec120[3];
	float fRec119[3];
	float fVec66[1024];
	float fRec98[2];
	float fVec67[16384];
	float fVec68[2];
	float fRec97[2];
	float fRec95[2];
	float fRec124[2];
	float fVec69[16384];
	float fVec70[2];
	float fRec123[2];
	float fRec96[2];
	float fVec71[16384];
	float fVec72[2];
	float fRec127[2];
	float fRec125[2];
	float fVec73[16384];
	float fVec74[2];
	float fRec128[2];
	float fRec126[2];
	float fVec75[16384];
	float fVec76[2];
	float fRec131[2];
	float fRec129[2];
	float fRec133[2];
	float fVec77[16384];
	float fVec78[2];
	float fRec132[2];
	float fRec130[2];
	float fRec137[2];
	float fVec79[16384];
	float fVec80[2];
	float fRec136[2];
	float fRec134[2];
	float fVec81[16384];
	float fVec82[2];
	float fRec138[2];
	float fRec135[2];
	float fRec0[8192];
	float fRec1[8192];
	float fConst54;
	float fRec139[2];
	float fRec140[2];
	float fConst55;
	float fRec141[2];
	
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
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
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
		fConst1 = 44.1f / fConst0;
		fConst2 = 1.0f - fConst1;
		fConst3 = std::tan(251.32741f / fConst0);
		fConst4 = _VerbScript_faustpower2_f(fConst3);
		fConst5 = 2.0f * (1.0f - 1.0f / fConst4);
		fConst6 = 1.0f / fConst3;
		fConst7 = (fConst6 + -1.4142135f) / fConst3 + 1.0f;
		fConst8 = (fConst6 + 1.4142135f) / fConst3 + 1.0f;
		fConst9 = 1.0f / fConst8;
		iConst10 = std::min<int>(8192, std::max<int>(0, int(0.02f * fConst0)));
		fConst11 = 1.0f / (fConst4 * fConst8);
		iConst12 = std::min<int>(8192, std::max<int>(0, int(0.0047845803f * fConst0) + -1));
		iConst13 = std::min<int>(8192, std::max<int>(0, int(0.0035600907f * fConst0) + -1));
		iConst14 = std::min<int>(8192, std::max<int>(0, int(0.0127664395f * fConst0) + -1));
		iConst15 = std::min<int>(8192, std::max<int>(0, int(0.009274377f * fConst0) + -1));
		fConst16 = std::tan(942.4778f / fConst0);
		fConst17 = _VerbScript_faustpower2_f(fConst16);
		fConst18 = 1.0f / fConst17;
		fConst19 = 2.0f * (1.0f - fConst18);
		fConst20 = 1.0f / fConst16;
		fConst21 = (fConst20 + -0.618034f) / fConst16 + 1.0f;
		fConst22 = 1.0f / ((fConst20 + 0.618034f) / fConst16 + 1.0f);
		fConst23 = (fConst20 + -1.618034f) / fConst16 + 1.0f;
		fConst24 = (fConst20 + 1.618034f) / fConst16 + 1.0f;
		fConst25 = 1.0f / fConst24;
		fConst26 = 1.0f - fConst20;
		fConst27 = std::tan(18849.557f / fConst0);
		fConst28 = _VerbScript_faustpower2_f(fConst27);
		fConst29 = 2.0f * (1.0f - 1.0f / fConst28);
		fConst30 = 1.0f / fConst27;
		fConst31 = (fConst30 + -0.618034f) / fConst27 + 1.0f;
		fConst32 = (fConst30 + 0.618034f) / fConst27 + 1.0f;
		fConst33 = 1.0f / fConst32;
		fConst34 = (fConst30 + -1.618034f) / fConst27 + 1.0f;
		fConst35 = (fConst30 + 1.618034f) / fConst27 + 1.0f;
		fConst36 = 1.0f / fConst35;
		fConst37 = 7.5398226f / fConst0;
		fConst38 = std::cos(fConst37);
		fConst39 = std::sin(fConst37);
		fConst40 = 0.0006f * (std::min<float>(fConst0, 1.92e+05f) / fConst0);
		fConst41 = 1.0f - fConst30;
		fConst42 = 1.0f / (fConst30 + 1.0f);
		fConst43 = 1.0f / (fConst20 + 1.0f);
		fConst44 = 1.0f / (fConst16 * fConst32);
		fConst45 = 1.0f / (fConst17 * fConst24);
		fConst46 = (fConst20 + -1.618034f) / fConst16 + 1.0f;
		fConst47 = 1.0f / ((fConst20 + 1.618034f) / fConst16 + 1.0f);
		fConst48 = 1.0f / (fConst28 * fConst35);
		fConst49 = 1.0f / (fConst28 * fConst32);
		iConst50 = std::min<int>(8192, std::max<int>(0, int(0.0050566895f * fConst0) + -1));
		iConst51 = std::min<int>(8192, std::max<int>(0, int(0.0037868482f * fConst0) + -1));
		iConst52 = std::min<int>(8192, std::max<int>(0, int(0.013310658f * fConst0) + -1));
		iConst53 = std::min<int>(8192, std::max<int>(0, int(0.009773242f * fConst0) + -1));
		fConst54 = 0.83f / fConst0;
		fConst55 = 0.55f / fConst0;
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.3f);
		fHslider1 = FAUSTFLOAT(0.84f);
		fHslider2 = FAUSTFLOAT(0.5f);
		fHslider3 = FAUSTFLOAT(0.32f);
		fHslider4 = FAUSTFLOAT(0.32f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec9[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec12[l2] = 0.0f;
		}
		IOTA0 = 0;
		for (int l3 = 0; l3 < 4096; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 1024; l4 = l4 + 1) {
			fVec2[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec10[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 1024; l6 = l6 + 1) {
			fVec3[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec7[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 4096; l8 = l8 + 1) {
			fVec4[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec5[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2048; l10 = l10 + 1) {
			fVec5[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec3[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec20[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec22[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec26[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 16384; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec7[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec25[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec23[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec28[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 16384; l20 = l20 + 1) {
			fVec8[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec9[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec27[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec24[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec32[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 16384; l25 = l25 + 1) {
			fVec10[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fVec11[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec31[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec29[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec34[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 16384; l30 = l30 + 1) {
			fVec12[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec13[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec33[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec30[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec38[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 16384; l35 = l35 + 1) {
			fVec14[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fVec15[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec37[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec35[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec40[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 16384; l40 = l40 + 1) {
			fVec16[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fVec17[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec39[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec36[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec44[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 16384; l45 = l45 + 1) {
			fVec18[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec19[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec43[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec41[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec46[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 16384; l50 = l50 + 1) {
			fVec20[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fVec21[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec45[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec42[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec50[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 16384; l55 = l55 + 1) {
			fVec22[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec23[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec49[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec47[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec52[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 16384; l60 = l60 + 1) {
			fVec24[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec25[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec51[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec48[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 1024; l64 = l64 + 1) {
			fVec26[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec53[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec54[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec55[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 16384; l68 = l68 + 1) {
			fVec27[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec28[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec21[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec59[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec61[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 1024; l73 = l73 + 1) {
			fVec29[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 16384; l74 = l74 + 1) {
			fVec30[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec31[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec60[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 16384; l77 = l77 + 1) {
			fVec32[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fVec33[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec58[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec56[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec63[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 16384; l82 = l82 + 1) {
			fVec34[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec35[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec62[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec57[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec67[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 16384; l87 = l87 + 1) {
			fVec36[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec37[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec66[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec64[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec69[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 16384; l92 = l92 + 1) {
			fVec38[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fVec39[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec68[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec65[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec73[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 16384; l97 = l97 + 1) {
			fVec40[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec41[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec72[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec70[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec75[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 16384; l102 = l102 + 1) {
			fVec42[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec43[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec74[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec71[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec79[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 16384; l107 = l107 + 1) {
			fVec44[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec45[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec78[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec76[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec81[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 16384; l112 = l112 + 1) {
			fVec46[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fVec47[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec80[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec77[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec85[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 16384; l117 = l117 + 1) {
			fVec48[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fVec49[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec84[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec82[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec87[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 16384; l122 = l122 + 1) {
			fVec50[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec51[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec86[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec83[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 16384; l126 = l126 + 1) {
			fVec52[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 16384; l127 = l127 + 1) {
			fVec53[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec54[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec19[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec18[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 3; l131 = l131 + 1) {
			fRec17[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 3; l132 = l132 + 1) {
			fRec16[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fVec55[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec15[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 3; l135 = l135 + 1) {
			fRec14[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 3; l136 = l136 + 1) {
			fRec13[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec90[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 3; l138 = l138 + 1) {
			fRec89[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 3; l139 = l139 + 1) {
			fRec88[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec94[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 3; l141 = l141 + 1) {
			fRec93[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 3; l142 = l142 + 1) {
			fRec92[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 3; l143 = l143 + 1) {
			fRec91[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 1024; l144 = l144 + 1) {
			fVec56[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec2[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 3; l146 = l146 + 1) {
			fRec107[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 4096; l147 = l147 + 1) {
			fVec57[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 1024; l148 = l148 + 1) {
			fVec58[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec105[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 1024; l150 = l150 + 1) {
			fVec59[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec103[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 4096; l152 = l152 + 1) {
			fVec60[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec101[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2048; l154 = l154 + 1) {
			fVec61[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec99[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec115[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 16384; l157 = l157 + 1) {
			fVec62[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 16384; l158 = l158 + 1) {
			fVec63[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fVec64[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec114[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec113[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 3; l162 = l162 + 1) {
			fRec112[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec111[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fVec65[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec110[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fRec109[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 3; l167 = l167 + 1) {
			fRec108[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec118[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 3; l169 = l169 + 1) {
			fRec117[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 3; l170 = l170 + 1) {
			fRec116[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec122[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 3; l172 = l172 + 1) {
			fRec121[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 3; l173 = l173 + 1) {
			fRec120[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec119[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 1024; l175 = l175 + 1) {
			fVec66[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec98[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 16384; l177 = l177 + 1) {
			fVec67[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec68[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec97[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec95[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec124[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 16384; l182 = l182 + 1) {
			fVec69[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fVec70[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec123[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec96[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 16384; l186 = l186 + 1) {
			fVec71[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fVec72[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec127[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec125[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 16384; l190 = l190 + 1) {
			fVec73[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fVec74[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec128[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec126[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 16384; l194 = l194 + 1) {
			fVec75[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec76[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec131[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec129[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec133[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 16384; l199 = l199 + 1) {
			fVec77[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fVec78[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec132[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec130[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec137[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 16384; l204 = l204 + 1) {
			fVec79[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fVec80[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec136[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec134[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 16384; l208 = l208 + 1) {
			fVec81[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fVec82[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec138[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec135[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 8192; l212 = l212 + 1) {
			fRec0[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 8192; l213 = l213 + 1) {
			fRec1[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec139[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec140[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec141[l216] = 0.0f;
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
		ui_interface->addHorizontalSlider("Damping", &fHslider0, FAUSTFLOAT(0.3f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Decay", &fHslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Diffusion", &fHslider1, FAUSTFLOAT(0.84f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Modulation", &fHslider4, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->addHorizontalSlider("Size", &fHslider3, FAUSTFLOAT(0.32f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 0.85f * std::pow(std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0))), 0.865f);
		float fSlow1 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider1)));
		float fSlow2 = fConst1 * ((fSlow1 > 0.84f) ? fSlow1 : 0.84f * std::pow(1.1904762f * fSlow1, 2.5f));
		float fSlow3 = 3.0f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3))) + 1.0f;
		float fSlow4 = 0.51f * ((1.25f * fSlow3 + -0.25f) / std::max<float>(0.75f, 0.5263158f * (std::max<float>(1.7f, 11.2f * std::pow(std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider2))), 2.353f) + 0.8f) + -0.1f)));
		int iSlow5 = itbl0_VerbScriptSIG0[int(134.0f * fSlow3)];
		float fSlow6 = 0.005f * float(iSlow5);
		int iSlow7 = itbl0_VerbScriptSIG0[int(54.0f * fSlow3)];
		float fSlow8 = 0.005f * float(iSlow7);
		int iSlow9 = itbl0_VerbScriptSIG0[int(1e+01f * fSlow3)];
		float fSlow10 = 0.0001f * float(iSlow9);
		int iSlow11 = itbl0_VerbScriptSIG0[int(1.1e+02f * fSlow3)];
		float fSlow12 = 0.0001f * float(iSlow11);
		int iSlow13 = itbl0_VerbScriptSIG0[int(4e+01f * fSlow3)];
		float fSlow14 = 0.0001f * float(iSlow13);
		int iSlow15 = itbl0_VerbScriptSIG0[int(1.4e+02f * fSlow3)];
		float fSlow16 = 0.0001f * float(iSlow15);
		int iSlow17 = itbl0_VerbScriptSIG0[int(7e+01f * fSlow3)];
		float fSlow18 = 0.0001f * float(iSlow17);
		int iSlow19 = itbl0_VerbScriptSIG0[int(1.7e+02f * fSlow3)];
		float fSlow20 = 0.0001f * float(iSlow19);
		int iSlow21 = itbl0_VerbScriptSIG0[int(1e+02f * fSlow3)];
		float fSlow22 = 0.0001f * float(iSlow21);
		int iSlow23 = itbl0_VerbScriptSIG0[int(2e+02f * fSlow3)];
		float fSlow24 = 0.0001f * float(iSlow23);
		int iSlow25 = itbl0_VerbScriptSIG0[int(1.3e+02f * fSlow3)];
		float fSlow26 = 0.0001f * float(iSlow25);
		int iSlow27 = itbl0_VerbScriptSIG0[int(2.3e+02f * fSlow3)];
		float fSlow28 = 0.0001f * float(iSlow27);
		float fSlow29 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider4)));
		float fSlow30 = fConst40 * std::pow(fSlow29, 1.75f);
		int iSlow31 = itbl0_VerbScriptSIG0[int(125.0f * fSlow3)];
		float fSlow32 = 0.0001f * float(iSlow31);
		int iSlow33 = itbl0_VerbScriptSIG0[int(204.0f * fSlow3)];
		float fSlow34 = 0.005f * float(iSlow33);
		int iSlow35 = itbl0_VerbScriptSIG0[int(25.0f * fSlow3)];
		float fSlow36 = 0.0001f * float(iSlow35);
		int iSlow37 = itbl0_VerbScriptSIG0[int(155.0f * fSlow3)];
		float fSlow38 = 0.0001f * float(iSlow37);
		int iSlow39 = itbl0_VerbScriptSIG0[int(55.0f * fSlow3)];
		float fSlow40 = 0.0001f * float(iSlow39);
		int iSlow41 = itbl0_VerbScriptSIG0[int(185.0f * fSlow3)];
		float fSlow42 = 0.0001f * float(iSlow41);
		int iSlow43 = itbl0_VerbScriptSIG0[int(85.0f * fSlow3)];
		float fSlow44 = 0.0001f * float(iSlow43);
		int iSlow45 = itbl0_VerbScriptSIG0[int(215.0f * fSlow3)];
		float fSlow46 = 0.0001f * float(iSlow45);
		int iSlow47 = itbl0_VerbScriptSIG0[int(115.0f * fSlow3)];
		float fSlow48 = 0.0001f * float(iSlow47);
		int iSlow49 = itbl0_VerbScriptSIG0[int(245.0f * fSlow3)];
		float fSlow50 = 0.0001f * float(iSlow49);
		int iSlow51 = itbl0_VerbScriptSIG0[int(145.0f * fSlow3)];
		float fSlow52 = 0.0001f * float(iSlow51);
		float fSlow53 = 1.0f - fSlow0;
		int iSlow54 = itbl0_VerbScriptSIG0[int(34.0f * fSlow3)];
		float fSlow55 = 0.005f * float(iSlow54);
		int iSlow56 = itbl0_VerbScriptSIG0[int(2.4e+02f * fSlow3)];
		float fSlow57 = 0.0001f * float(iSlow56);
		int iSlow58 = itbl0_VerbScriptSIG0[int(1.9e+02f * fSlow3)];
		float fSlow59 = 0.0001f * float(iSlow58);
		int iSlow60 = itbl0_VerbScriptSIG0[int(175.0f * fSlow3)];
		float fSlow61 = 0.0001f * float(iSlow60);
		float fSlow62 = fConst1 * fSlow29;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			fRec9[0] = fSlow2 + fConst2 * fRec9[1];
			float fTemp0 = std::min<float>(0.8f, 0.89285713f * fRec9[0]);
			fRec12[0] = float(input0[i0]) - fConst9 * (fConst7 * fRec12[2] + fConst5 * fRec12[1]);
			fVec1[IOTA0 & 4095] = fRec12[2] + (fRec12[0] - 2.0f * fRec12[1]);
			float fTemp1 = fTemp0 * fRec10[1] + fConst11 * fVec1[(IOTA0 - iConst10) & 4095];
			fVec2[IOTA0 & 1023] = fTemp1;
			fRec10[0] = fVec2[(IOTA0 - iConst12) & 1023];
			float fRec11 = -(fTemp0 * fTemp1);
			float fTemp2 = fRec10[1] + fRec11 + fRec7[1] * fTemp0;
			fVec3[IOTA0 & 1023] = fTemp2;
			fRec7[0] = fVec3[(IOTA0 - iConst13) & 1023];
			float fRec8 = -(fTemp0 * fTemp2);
			float fTemp3 = std::min<float>(0.7f, 0.74404764f * fRec9[0]);
			float fTemp4 = fTemp3 * fRec5[1] + fRec8 + fRec7[1];
			fVec4[IOTA0 & 4095] = fTemp4;
			fRec5[0] = fVec4[(IOTA0 - iConst14) & 4095];
			float fRec6 = -(fTemp3 * fTemp4);
			float fTemp5 = fRec3[1] * fTemp3 + fRec6 + fRec5[1];
			fVec5[IOTA0 & 2047] = fTemp5;
			fRec3[0] = fVec5[(IOTA0 - iConst15) & 2047];
			float fRec4 = -(fTemp3 * fTemp5);
			float fTemp6 = std::pow(1e+01f, -(fSlow4 / (0.15f * (1.0f - _VerbScript_faustpower3_f(1.1904762f * std::min<float>(fRec9[0], 0.84f))) + 1.0f)));
			int iTemp7 = 1 - iVec0[1];
			fRec20[0] = 0.995f * (fRec20[1] + float(iTemp7 * iSlow5)) + fSlow6;
			float fTemp8 = fRec20[0] + -1.49999f;
			float fTemp9 = std::floor(fTemp8);
			fRec22[0] = 0.995f * (fRec22[1] + float(iTemp7 * iSlow7)) + fSlow8;
			float fTemp10 = fRec22[0] + -1.49999f;
			float fTemp11 = std::floor(fTemp10);
			float fTemp12 = fRec0[(IOTA0 - 1) & 8191];
			fRec26[0] = 0.9999f * (fRec26[1] + float(iTemp7 * iSlow9)) + fSlow10;
			float fTemp13 = fRec26[0] + -1.49999f;
			float fTemp14 = std::floor(fTemp13);
			float fTemp15 = fRec26[0] - fTemp14;
			float fTemp16 = fTemp14 + (2.0f - fRec26[0]);
			float fTemp17 = fRec1[(IOTA0 - 1) & 8191];
			float fTemp18 = 0.7602446f * fTemp17;
			float fTemp19 = 0.6496369f * fRec24[1];
			float fTemp20 = 0.7602446f * fTemp12 - 0.6496369f * fRec23[1];
			fVec6[IOTA0 & 16383] = fTemp20 + (fTemp19 - fTemp18);
			float fTemp21 = fVec6[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp13)))) & 16383];
			fVec7[0] = fTemp21;
			fRec25[0] = 0.70710677f * (fTemp16 * fTemp21 / fTemp15 + fVec7[1]) - fRec25[1] * fTemp16 / fTemp15;
			fRec23[0] = fRec25[0];
			fRec28[0] = 0.9999f * (fRec28[1] + float(iTemp7 * iSlow11)) + fSlow12;
			float fTemp22 = fRec28[0] + -1.49999f;
			float fTemp23 = std::floor(fTemp22);
			float fTemp24 = fRec28[0] - fTemp23;
			float fTemp25 = fTemp23 + (2.0f - fRec28[0]);
			fVec8[IOTA0 & 16383] = fTemp20 + (fTemp18 - fTemp19);
			float fTemp26 = fVec8[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp22)))) & 16383];
			fVec9[0] = fTemp26;
			fRec27[0] = 0.70710677f * (fTemp25 * fTemp26 / fTemp24 + fVec9[1]) - fRec27[1] * fTemp25 / fTemp24;
			fRec24[0] = fRec27[0];
			float fTemp27 = 0.7602446f * fRec23[1] + 0.6496369f * fTemp12;
			fRec32[0] = 0.9999f * (fRec32[1] + float(iTemp7 * iSlow13)) + fSlow14;
			float fTemp28 = fRec32[0] + -1.49999f;
			float fTemp29 = std::floor(fTemp28);
			float fTemp30 = fRec32[0] - fTemp29;
			float fTemp31 = fTemp29 + (2.0f - fRec32[0]);
			float fTemp32 = 0.7602446f * fRec24[1] + 0.6496369f * fTemp17;
			float fTemp33 = 0.7602446f * fTemp32;
			float fTemp34 = 0.6496369f * fRec30[1];
			float fTemp35 = 0.7602446f * fTemp27 - 0.6496369f * fRec29[1];
			fVec10[IOTA0 & 16383] = fTemp35 + (fTemp34 - fTemp33);
			float fTemp36 = fVec10[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp28)))) & 16383];
			fVec11[0] = fTemp36;
			fRec31[0] = 0.70710677f * (fTemp31 * fTemp36 / fTemp30 + fVec11[1]) - fRec31[1] * fTemp31 / fTemp30;
			fRec29[0] = fRec31[0];
			fRec34[0] = 0.9999f * (fRec34[1] + float(iTemp7 * iSlow15)) + fSlow16;
			float fTemp37 = fRec34[0] + -1.49999f;
			float fTemp38 = std::floor(fTemp37);
			float fTemp39 = fRec34[0] - fTemp38;
			float fTemp40 = fTemp38 + (2.0f - fRec34[0]);
			fVec12[IOTA0 & 16383] = fTemp35 + (fTemp33 - fTemp34);
			float fTemp41 = fVec12[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp37)))) & 16383];
			fVec13[0] = fTemp41;
			fRec33[0] = 0.70710677f * (fTemp40 * fTemp41 / fTemp39 + fVec13[1]) - fRec33[1] * fTemp40 / fTemp39;
			fRec30[0] = fRec33[0];
			float fTemp42 = 0.7602446f * fRec29[1] + 0.6496369f * fTemp27;
			fRec38[0] = 0.9999f * (fRec38[1] + float(iTemp7 * iSlow17)) + fSlow18;
			float fTemp43 = fRec38[0] + -1.49999f;
			float fTemp44 = std::floor(fTemp43);
			float fTemp45 = fRec38[0] - fTemp44;
			float fTemp46 = fTemp44 + (2.0f - fRec38[0]);
			float fTemp47 = 0.7602446f * fRec30[1] + 0.6496369f * fTemp32;
			float fTemp48 = 0.7602446f * fTemp47;
			float fTemp49 = 0.6496369f * fRec36[1];
			float fTemp50 = 0.7602446f * fTemp42 - 0.6496369f * fRec35[1];
			fVec14[IOTA0 & 16383] = fTemp50 + (fTemp49 - fTemp48);
			float fTemp51 = fVec14[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp43)))) & 16383];
			fVec15[0] = fTemp51;
			fRec37[0] = 0.70710677f * (fTemp46 * fTemp51 / fTemp45 + fVec15[1]) - fRec37[1] * fTemp46 / fTemp45;
			fRec35[0] = fRec37[0];
			fRec40[0] = 0.9999f * (fRec40[1] + float(iTemp7 * iSlow19)) + fSlow20;
			float fTemp52 = fRec40[0] + -1.49999f;
			float fTemp53 = std::floor(fTemp52);
			float fTemp54 = fRec40[0] - fTemp53;
			float fTemp55 = fTemp53 + (2.0f - fRec40[0]);
			fVec16[IOTA0 & 16383] = fTemp50 + (fTemp48 - fTemp49);
			float fTemp56 = fVec16[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp52)))) & 16383];
			fVec17[0] = fTemp56;
			fRec39[0] = 0.70710677f * (fTemp55 * fTemp56 / fTemp54 + fVec17[1]) - fRec39[1] * fTemp55 / fTemp54;
			fRec36[0] = fRec39[0];
			float fTemp57 = 0.7602446f * fRec35[1] + 0.6496369f * fTemp42;
			fRec44[0] = 0.9999f * (fRec44[1] + float(iTemp7 * iSlow21)) + fSlow22;
			float fTemp58 = fRec44[0] + -1.49999f;
			float fTemp59 = std::floor(fTemp58);
			float fTemp60 = fRec44[0] - fTemp59;
			float fTemp61 = fTemp59 + (2.0f - fRec44[0]);
			float fTemp62 = 0.7602446f * fRec36[1] + 0.6496369f * fTemp47;
			float fTemp63 = 0.7602446f * fTemp62;
			float fTemp64 = 0.6496369f * fRec42[1];
			float fTemp65 = 0.7602446f * fTemp57 - 0.6496369f * fRec41[1];
			fVec18[IOTA0 & 16383] = fTemp65 + (fTemp64 - fTemp63);
			float fTemp66 = fVec18[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp58)))) & 16383];
			fVec19[0] = fTemp66;
			fRec43[0] = 0.70710677f * (fTemp61 * fTemp66 / fTemp60 + fVec19[1]) - fRec43[1] * fTemp61 / fTemp60;
			fRec41[0] = fRec43[0];
			fRec46[0] = 0.9999f * (fRec46[1] + float(iTemp7 * iSlow23)) + fSlow24;
			float fTemp67 = fRec46[0] + -1.49999f;
			float fTemp68 = std::floor(fTemp67);
			float fTemp69 = fRec46[0] - fTemp68;
			float fTemp70 = fTemp68 + (2.0f - fRec46[0]);
			fVec20[IOTA0 & 16383] = fTemp65 + (fTemp63 - fTemp64);
			float fTemp71 = fVec20[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp67)))) & 16383];
			fVec21[0] = fTemp71;
			fRec45[0] = 0.70710677f * (fTemp70 * fTemp71 / fTemp69 + fVec21[1]) - fRec45[1] * fTemp70 / fTemp69;
			fRec42[0] = fRec45[0];
			float fTemp72 = 0.7602446f * fRec41[1] + 0.6496369f * fTemp57;
			fRec50[0] = 0.9999f * (fRec50[1] + float(iTemp7 * iSlow25)) + fSlow26;
			float fTemp73 = fRec50[0] + -1.49999f;
			float fTemp74 = std::floor(fTemp73);
			float fTemp75 = fRec50[0] - fTemp74;
			float fTemp76 = fTemp74 + (2.0f - fRec50[0]);
			float fTemp77 = 0.7602446f * fRec42[1] + 0.6496369f * fTemp62;
			float fTemp78 = 0.7602446f * fTemp77;
			float fTemp79 = 0.6496369f * fRec48[1];
			float fTemp80 = 0.7602446f * fTemp72 - 0.6496369f * fRec47[1];
			fVec22[IOTA0 & 16383] = fTemp80 + (fTemp79 - fTemp78);
			float fTemp81 = fVec22[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp73)))) & 16383];
			fVec23[0] = fTemp81;
			fRec49[0] = 0.70710677f * (fTemp76 * fTemp81 / fTemp75 + fVec23[1]) - fRec49[1] * fTemp76 / fTemp75;
			fRec47[0] = fRec49[0];
			fRec52[0] = 0.9999f * (fRec52[1] + float(iTemp7 * iSlow27)) + fSlow28;
			float fTemp82 = fRec52[0] + -1.49999f;
			float fTemp83 = std::floor(fTemp82);
			float fTemp84 = fRec52[0] - fTemp83;
			float fTemp85 = fTemp83 + (2.0f - fRec52[0]);
			fVec24[IOTA0 & 16383] = fTemp80 + (fTemp78 - fTemp79);
			float fTemp86 = fVec24[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp82)))) & 16383];
			fVec25[0] = fTemp86;
			fRec51[0] = 0.70710677f * (fTemp85 * fTemp86 / fTemp84 + fVec25[1]) - fRec51[1] * fTemp85 / fTemp84;
			fRec48[0] = fRec51[0];
			float fTemp87 = 0.7602446f * fRec47[1] + 0.6496369f * fTemp72;
			fVec26[IOTA0 & 1023] = fTemp87;
			fRec53[0] = fConst39 * fRec54[1] + fConst38 * fRec53[1];
			fRec54[0] = float(iTemp7) + fConst38 * fRec54[1] - fConst39 * fRec53[1];
			fRec55[0] = fSlow30 + fConst2 * fRec55[1];
			float fTemp88 = 5e+01f * fRec55[0] * (fRec54[0] + 1.0f);
			float fTemp89 = fTemp88 + 3.500005f;
			int iTemp90 = int(fTemp89);
			int iTemp91 = std::min<int>(512, std::max<int>(0, iTemp90 + 4));
			float fTemp92 = std::floor(fTemp89);
			float fTemp93 = fTemp88 + (2.0f - fTemp92);
			float fTemp94 = fTemp88 + (3.0f - fTemp92);
			float fTemp95 = fTemp88 + (4.0f - fTemp92);
			float fTemp96 = fTemp88 + (5.0f - fTemp92);
			float fTemp97 = fTemp96 * fTemp95;
			float fTemp98 = fTemp97 * fTemp94;
			float fTemp99 = fTemp98 * fTemp93;
			int iTemp100 = std::min<int>(512, std::max<int>(0, iTemp90 + 3));
			int iTemp101 = std::min<int>(512, std::max<int>(0, iTemp90 + 2));
			int iTemp102 = std::min<int>(512, std::max<int>(0, iTemp90 + 1));
			int iTemp103 = std::min<int>(512, std::max<int>(0, iTemp90));
			float fTemp104 = fTemp88 + (1.0f - fTemp92);
			fVec27[IOTA0 & 16383] = fTemp104 * (fTemp93 * (fTemp94 * (0.041666668f * fVec26[(IOTA0 - iTemp103) & 1023] * fTemp95 - 0.16666667f * fTemp96 * fVec26[(IOTA0 - iTemp102) & 1023]) + 0.25f * fTemp97 * fVec26[(IOTA0 - iTemp101) & 1023]) - 0.16666667f * fTemp98 * fVec26[(IOTA0 - iTemp100) & 1023]) + 0.041666668f * fTemp99 * fVec26[(IOTA0 - iTemp91) & 1023];
			float fTemp105 = fVec27[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp10)))) & 16383];
			fVec28[0] = fTemp105;
			fRec21[0] = fVec28[1] - (fTemp11 + (2.0f - fRec22[0])) * (fRec21[1] - fTemp105) / (fRec22[0] - fTemp11);
			fRec59[0] = 0.9999f * (fRec59[1] + float(iTemp7 * iSlow31)) + fSlow32;
			float fTemp106 = fRec59[0] + -1.49999f;
			float fTemp107 = std::floor(fTemp106);
			float fTemp108 = fRec59[0] - fTemp107;
			float fTemp109 = fTemp107 + (2.0f - fRec59[0]);
			fRec61[0] = 0.995f * (fRec61[1] + float(iTemp7 * iSlow33)) + fSlow34;
			float fTemp110 = fRec61[0] + -1.49999f;
			float fTemp111 = std::floor(fTemp110);
			float fTemp112 = 0.7602446f * fRec48[1] + 0.6496369f * fTemp77;
			fVec29[IOTA0 & 1023] = fTemp112;
			float fTemp113 = 5e+01f * fRec55[0] * (1.0f - fRec54[0]);
			float fTemp114 = fTemp113 + 3.500005f;
			int iTemp115 = int(fTemp114);
			float fTemp116 = std::floor(fTemp114);
			float fTemp117 = fTemp113 + (2.0f - fTemp116);
			float fTemp118 = fTemp113 + (3.0f - fTemp116);
			float fTemp119 = fTemp113 + (4.0f - fTemp116);
			float fTemp120 = fTemp113 + (5.0f - fTemp116);
			float fTemp121 = fTemp120 * fTemp119;
			float fTemp122 = fTemp121 * fTemp118;
			fVec30[IOTA0 & 16383] = (fTemp113 + (1.0f - fTemp116)) * (fTemp117 * (fTemp118 * (0.041666668f * fVec29[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp115))) & 1023] * fTemp119 - 0.16666667f * fTemp120 * fVec29[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp115 + 1))) & 1023]) + 0.25f * fTemp121 * fVec29[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp115 + 2))) & 1023]) - 0.16666667f * fTemp122 * fVec29[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp115 + 3))) & 1023]) + 0.041666668f * fTemp122 * fTemp117 * fVec29[(IOTA0 - std::min<int>(512, std::max<int>(0, iTemp115 + 4))) & 1023];
			float fTemp123 = fVec30[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp110)))) & 16383];
			fVec31[0] = fTemp123;
			fRec60[0] = fVec31[1] - (fTemp111 + (2.0f - fRec61[0])) * (fRec60[1] - fTemp123) / (fRec61[0] - fTemp111);
			float fTemp124 = 0.7602446f * fRec60[0];
			float fTemp125 = 0.6496369f * fRec57[1];
			float fTemp126 = 0.7602446f * fRec21[0] - 0.6496369f * fRec56[1];
			fVec32[IOTA0 & 16383] = fTemp126 + (fTemp125 - fTemp124);
			float fTemp127 = fVec32[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp106)))) & 16383];
			fVec33[0] = fTemp127;
			fRec58[0] = 0.70710677f * (fTemp109 * fTemp127 / fTemp108 + fVec33[1]) - fRec58[1] * fTemp109 / fTemp108;
			fRec56[0] = fRec58[0];
			fRec63[0] = 0.9999f * (fRec63[1] + float(iTemp7 * iSlow35)) + fSlow36;
			float fTemp128 = fRec63[0] + -1.49999f;
			float fTemp129 = std::floor(fTemp128);
			float fTemp130 = fRec63[0] - fTemp129;
			float fTemp131 = fTemp129 + (2.0f - fRec63[0]);
			fVec34[IOTA0 & 16383] = fTemp126 + (fTemp124 - fTemp125);
			float fTemp132 = fVec34[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp128)))) & 16383];
			fVec35[0] = fTemp132;
			fRec62[0] = 0.70710677f * (fTemp131 * fTemp132 / fTemp130 + fVec35[1]) - fRec62[1] * fTemp131 / fTemp130;
			fRec57[0] = fRec62[0];
			float fTemp133 = 0.7602446f * fRec56[1] + 0.6496369f * fRec21[0];
			fRec67[0] = 0.9999f * (fRec67[1] + float(iTemp7 * iSlow37)) + fSlow38;
			float fTemp134 = fRec67[0] + -1.49999f;
			float fTemp135 = std::floor(fTemp134);
			float fTemp136 = fRec67[0] - fTemp135;
			float fTemp137 = fTemp135 + (2.0f - fRec67[0]);
			float fTemp138 = 0.7602446f * fRec57[1] + 0.6496369f * fRec60[0];
			float fTemp139 = 0.7602446f * fTemp138;
			float fTemp140 = 0.6496369f * fRec65[1];
			float fTemp141 = 0.7602446f * fTemp133 - 0.6496369f * fRec64[1];
			fVec36[IOTA0 & 16383] = fTemp141 + (fTemp140 - fTemp139);
			float fTemp142 = fVec36[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp134)))) & 16383];
			fVec37[0] = fTemp142;
			fRec66[0] = 0.70710677f * (fTemp137 * fTemp142 / fTemp136 + fVec37[1]) - fRec66[1] * fTemp137 / fTemp136;
			fRec64[0] = fRec66[0];
			fRec69[0] = 0.9999f * (fRec69[1] + float(iTemp7 * iSlow39)) + fSlow40;
			float fTemp143 = fRec69[0] + -1.49999f;
			float fTemp144 = std::floor(fTemp143);
			float fTemp145 = fRec69[0] - fTemp144;
			float fTemp146 = fTemp144 + (2.0f - fRec69[0]);
			fVec38[IOTA0 & 16383] = fTemp141 + (fTemp139 - fTemp140);
			int iTemp147 = std::min<int>(8192, std::max<int>(0, int(fTemp143)));
			float fTemp148 = fVec38[(IOTA0 - iTemp147) & 16383];
			fVec39[0] = fTemp148;
			fRec68[0] = 0.70710677f * (fTemp146 * fTemp148 / fTemp145 + fVec39[1]) - fTemp146 * fRec68[1] / fTemp145;
			fRec65[0] = fRec68[0];
			float fTemp149 = 0.7602446f * fRec64[1] + 0.6496369f * fTemp133;
			fRec73[0] = 0.9999f * (fRec73[1] + float(iTemp7 * iSlow41)) + fSlow42;
			float fTemp150 = fRec73[0] + -1.49999f;
			float fTemp151 = std::floor(fTemp150);
			float fTemp152 = fRec73[0] - fTemp151;
			float fTemp153 = fTemp151 + (2.0f - fRec73[0]);
			float fTemp154 = 0.7602446f * fRec65[1] + 0.6496369f * fTemp138;
			float fTemp155 = 0.7602446f * fTemp154;
			float fTemp156 = 0.6496369f * fRec71[1];
			float fTemp157 = 0.7602446f * fTemp149 - 0.6496369f * fRec70[1];
			fVec40[IOTA0 & 16383] = fTemp157 + (fTemp156 - fTemp155);
			float fTemp158 = fVec40[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp150)))) & 16383];
			fVec41[0] = fTemp158;
			fRec72[0] = 0.70710677f * (fTemp153 * fTemp158 / fTemp152 + fVec41[1]) - fRec72[1] * fTemp153 / fTemp152;
			fRec70[0] = fRec72[0];
			fRec75[0] = 0.9999f * (fRec75[1] + float(iTemp7 * iSlow43)) + fSlow44;
			float fTemp159 = fRec75[0] + -1.49999f;
			float fTemp160 = std::floor(fTemp159);
			float fTemp161 = fRec75[0] - fTemp160;
			float fTemp162 = fTemp160 + (2.0f - fRec75[0]);
			fVec42[IOTA0 & 16383] = fTemp157 + (fTemp155 - fTemp156);
			int iTemp163 = std::min<int>(8192, std::max<int>(0, int(fTemp159)));
			float fTemp164 = fVec42[(IOTA0 - iTemp163) & 16383];
			fVec43[0] = fTemp164;
			fRec74[0] = 0.70710677f * (fTemp162 * fTemp164 / fTemp161 + fVec43[1]) - fRec74[1] * fTemp162 / fTemp161;
			fRec71[0] = fRec74[0];
			float fTemp165 = 0.7602446f * fRec70[1] + 0.6496369f * fTemp149;
			fRec79[0] = 0.9999f * (fRec79[1] + float(iTemp7 * iSlow45)) + fSlow46;
			float fTemp166 = fRec79[0] + -1.49999f;
			float fTemp167 = std::floor(fTemp166);
			float fTemp168 = fRec79[0] - fTemp167;
			float fTemp169 = fTemp167 + (2.0f - fRec79[0]);
			float fTemp170 = 0.7602446f * fRec71[1] + 0.6496369f * fTemp154;
			float fTemp171 = 0.7602446f * fTemp170;
			float fTemp172 = 0.6496369f * fRec77[1];
			float fTemp173 = 0.7602446f * fTemp165 - 0.6496369f * fRec76[1];
			fVec44[IOTA0 & 16383] = fTemp173 + (fTemp172 - fTemp171);
			int iTemp174 = std::min<int>(8192, std::max<int>(0, int(fTemp166)));
			float fTemp175 = fVec44[(IOTA0 - iTemp174) & 16383];
			fVec45[0] = fTemp175;
			fRec78[0] = 0.70710677f * (fTemp169 * fTemp175 / fTemp168 + fVec45[1]) - fTemp169 * fRec78[1] / fTemp168;
			fRec76[0] = fRec78[0];
			fRec81[0] = 0.9999f * (fRec81[1] + float(iTemp7 * iSlow47)) + fSlow48;
			float fTemp176 = fRec81[0] + -1.49999f;
			float fTemp177 = std::floor(fTemp176);
			float fTemp178 = fRec81[0] - fTemp177;
			float fTemp179 = fTemp177 + (2.0f - fRec81[0]);
			fVec46[IOTA0 & 16383] = fTemp173 + (fTemp171 - fTemp172);
			int iTemp180 = std::min<int>(8192, std::max<int>(0, int(fTemp176)));
			float fTemp181 = fVec46[(IOTA0 - iTemp180) & 16383];
			fVec47[0] = fTemp181;
			fRec80[0] = 0.70710677f * (fTemp179 * fTemp181 / fTemp178 + fVec47[1]) - fTemp179 * fRec80[1] / fTemp178;
			fRec77[0] = fRec80[0];
			float fTemp182 = 0.7602446f * fRec76[1] + 0.6496369f * fTemp165;
			fRec85[0] = 0.9999f * (fRec85[1] + float(iTemp7 * iSlow49)) + fSlow50;
			float fTemp183 = fRec85[0] + -1.49999f;
			float fTemp184 = std::floor(fTemp183);
			float fTemp185 = fRec85[0] - fTemp184;
			float fTemp186 = fTemp184 + (2.0f - fRec85[0]);
			float fTemp187 = 0.7602446f * fRec77[1] + 0.6496369f * fTemp170;
			float fTemp188 = 0.7602446f * fTemp187;
			float fTemp189 = 0.6496369f * fRec83[1];
			float fTemp190 = 0.7602446f * fTemp182 - 0.6496369f * fRec82[1];
			fVec48[IOTA0 & 16383] = fTemp190 + (fTemp189 - fTemp188);
			float fTemp191 = fVec48[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp183)))) & 16383];
			fVec49[0] = fTemp191;
			fRec84[0] = 0.70710677f * (fTemp186 * fTemp191 / fTemp185 + fVec49[1]) - fRec84[1] * fTemp186 / fTemp185;
			fRec82[0] = fRec84[0];
			fRec87[0] = 0.9999f * (fRec87[1] + float(iTemp7 * iSlow51)) + fSlow52;
			float fTemp192 = fRec87[0] + -1.49999f;
			float fTemp193 = std::floor(fTemp192);
			float fTemp194 = fRec87[0] - fTemp193;
			float fTemp195 = fTemp193 + (2.0f - fRec87[0]);
			fVec50[IOTA0 & 16383] = fTemp190 + (fTemp188 - fTemp189);
			int iTemp196 = std::min<int>(8192, std::max<int>(0, int(fTemp192)));
			float fTemp197 = fVec50[(IOTA0 - iTemp196) & 16383];
			fVec51[0] = fTemp197;
			fRec86[0] = 0.70710677f * (fTemp195 * fTemp197 / fTemp194 + fVec51[1]) - fRec86[1] * fTemp195 / fTemp194;
			fRec83[0] = fRec86[0];
			float fTemp198 = 0.7602446f * fRec82[1] + 0.6496369f * fTemp182;
			fVec52[IOTA0 & 16383] = fTemp198;
			float fTemp199 = 5e+01f * fRec55[0] * (fRec53[0] + 1.0f);
			float fTemp200 = fTemp199 + 3.500005f;
			int iTemp201 = int(fTemp200);
			int iTemp202 = std::max<int>(0, iTemp201 + 4);
			float fTemp203 = std::floor(fTemp200);
			float fTemp204 = fTemp199 + (2.0f - fTemp203);
			float fTemp205 = fTemp199 + (3.0f - fTemp203);
			float fTemp206 = fTemp199 + (4.0f - fTemp203);
			float fTemp207 = fTemp199 + (5.0f - fTemp203);
			float fTemp208 = fTemp207 * fTemp206;
			float fTemp209 = fTemp208 * fTemp205;
			float fTemp210 = fTemp209 * fTemp204;
			int iTemp211 = std::max<int>(0, iTemp201 + 3);
			int iTemp212 = std::max<int>(0, iTemp201 + 2);
			int iTemp213 = std::max<int>(0, iTemp201 + 1);
			int iTemp214 = std::max<int>(0, iTemp201);
			float fTemp215 = fTemp199 + (1.0f - fTemp203);
			fVec53[IOTA0 & 16383] = fTemp215 * (fTemp204 * (fTemp205 * (0.041666668f * fVec52[(IOTA0 - std::min<int>(8192, iTemp214)) & 16383] * fTemp206 - 0.16666667f * fTemp207 * fVec52[(IOTA0 - std::min<int>(8192, iTemp213)) & 16383]) + 0.25f * fTemp208 * fVec52[(IOTA0 - std::min<int>(8192, iTemp212)) & 16383]) - 0.16666667f * fTemp209 * fVec52[(IOTA0 - std::min<int>(8192, iTemp211)) & 16383]) + 0.041666668f * fTemp210 * fVec52[(IOTA0 - std::min<int>(8192, iTemp202)) & 16383];
			float fTemp216 = fVec53[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp8)))) & 16383];
			fVec54[0] = fTemp216;
			fRec19[0] = fVec54[1] - (fTemp9 + (2.0f - fRec20[0])) * (fRec19[1] - fTemp216) / (fRec20[0] - fTemp9);
			fRec18[0] = -(fConst42 * (fConst41 * fRec18[1] - (fRec19[0] + fRec19[1])));
			fRec17[0] = fRec18[0] - fConst36 * (fConst34 * fRec17[2] + fConst29 * fRec17[1]);
			fRec16[0] = fConst36 * (fRec17[2] + fRec17[0] + 2.0f * fRec17[1]) - fConst33 * (fConst31 * fRec16[2] + fConst29 * fRec16[1]);
			float fTemp217 = fRec16[2] + fRec16[0] + 2.0f * fRec16[1];
			fVec55[0] = fTemp217;
			fRec15[0] = fConst43 * (fConst33 * (fTemp217 + fVec55[1]) - fConst26 * fRec15[1]);
			fRec14[0] = fRec15[0] - fConst25 * (fConst23 * fRec14[2] + fConst19 * fRec14[1]);
			fRec13[0] = fConst25 * (fRec14[2] + fRec14[0] + 2.0f * fRec14[1]) - fConst22 * (fConst21 * fRec13[2] + fConst19 * fRec13[1]);
			fRec90[0] = -(fConst43 * (fConst26 * fRec90[1] - fConst44 * (fTemp217 - fVec55[1])));
			fRec89[0] = fRec90[0] - fConst25 * (fConst23 * fRec89[2] + fConst19 * fRec89[1]);
			fRec88[0] = fConst45 * (fRec89[2] + (fRec89[0] - 2.0f * fRec89[1])) - fConst22 * (fConst21 * fRec88[2] + fConst19 * fRec88[1]);
			float fTemp218 = fConst19 * fRec91[1];
			fRec94[0] = -(fConst42 * (fConst41 * fRec94[1] - fConst30 * (fRec19[0] - fRec19[1])));
			fRec93[0] = fRec94[0] - fConst36 * (fConst34 * fRec93[2] + fConst29 * fRec93[1]);
			fRec92[0] = fConst48 * (fRec93[2] + (fRec93[0] - 2.0f * fRec93[1])) - fConst33 * (fConst31 * fRec92[2] + fConst29 * fRec92[1]);
			fRec91[0] = fConst49 * (fRec92[2] + (fRec92[0] - 2.0f * fRec92[1])) - fConst47 * (fConst46 * fRec91[2] + fTemp218);
			float fTemp219 = (0.8f * (fRec91[2] + fConst47 * (fTemp218 + fConst46 * fRec91[0])) + fConst22 * (fConst18 * (fRec88[2] + (fRec88[0] - 2.0f * fRec88[1])) + 0.6f * (fRec13[2] + fRec13[0] + 2.0f * fRec13[1]))) * fTemp6 + fRec4 + fRec3[1];
			fVec56[IOTA0 & 1023] = fTemp219;
			fRec2[0] = fSlow53 * (fTemp215 * (fTemp204 * (fTemp205 * (0.041666668f * fTemp206 * fVec56[(IOTA0 - std::min<int>(512, iTemp214)) & 1023] - 0.16666667f * fTemp207 * fVec56[(IOTA0 - std::min<int>(512, iTemp213)) & 1023]) + 0.25f * fTemp208 * fVec56[(IOTA0 - std::min<int>(512, iTemp212)) & 1023]) - 0.16666667f * fTemp209 * fVec56[(IOTA0 - std::min<int>(512, iTemp211)) & 1023]) + 0.041666668f * fTemp210 * fVec56[(IOTA0 - std::min<int>(512, iTemp202)) & 1023]) + fSlow0 * fRec2[1];
			float fTemp220 = std::sin(fRec9[0]);
			fRec107[0] = float(input1[i0]) - fConst9 * (fConst7 * fRec107[2] + fConst5 * fRec107[1]);
			fVec57[IOTA0 & 4095] = fRec107[2] + (fRec107[0] - 2.0f * fRec107[1]);
			float fTemp221 = fTemp0 * fRec105[1] + fConst11 * fVec57[(IOTA0 - iConst10) & 4095];
			fVec58[IOTA0 & 1023] = fTemp221;
			fRec105[0] = fVec58[(IOTA0 - iConst50) & 1023];
			float fRec106 = -(fTemp0 * fTemp221);
			float fTemp222 = fRec105[1] + fRec106 + fTemp0 * fRec103[1];
			fVec59[IOTA0 & 1023] = fTemp222;
			fRec103[0] = fVec59[(IOTA0 - iConst51) & 1023];
			float fRec104 = -(fTemp0 * fTemp222);
			float fTemp223 = fRec103[1] + fRec104 + fTemp3 * fRec101[1];
			fVec60[IOTA0 & 4095] = fTemp223;
			fRec101[0] = fVec60[(IOTA0 - iConst52) & 4095];
			float fRec102 = -(fTemp3 * fTemp223);
			float fTemp224 = fRec101[1] + fRec102 + fTemp3 * fRec99[1];
			fVec61[IOTA0 & 2047] = fTemp224;
			fRec99[0] = fVec61[(IOTA0 - iConst53) & 2047];
			float fRec100 = -(fTemp3 * fTemp224);
			fRec115[0] = 0.995f * (fRec115[1] + float(iTemp7 * iSlow54)) + fSlow55;
			float fTemp225 = fRec115[0] + -1.49999f;
			float fTemp226 = std::floor(fTemp225);
			float fTemp227 = 0.7602446f * fRec83[1] + 0.6496369f * fTemp187;
			fVec62[IOTA0 & 16383] = fTemp227;
			float fTemp228 = 5e+01f * fRec55[0] * (1.0f - fRec53[0]);
			float fTemp229 = fTemp228 + 3.500005f;
			int iTemp230 = int(fTemp229);
			float fTemp231 = std::floor(fTemp229);
			float fTemp232 = fTemp228 + (2.0f - fTemp231);
			float fTemp233 = fTemp228 + (3.0f - fTemp231);
			float fTemp234 = fTemp228 + (4.0f - fTemp231);
			float fTemp235 = fTemp228 + (5.0f - fTemp231);
			float fTemp236 = fTemp235 * fTemp234;
			float fTemp237 = fTemp236 * fTemp233;
			fVec63[IOTA0 & 16383] = (fTemp228 + (1.0f - fTemp231)) * (fTemp232 * (fTemp233 * (0.041666668f * fVec62[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp230))) & 16383] * fTemp234 - 0.16666667f * fTemp235 * fVec62[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp230 + 1))) & 16383]) + 0.25f * fTemp236 * fVec62[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp230 + 2))) & 16383]) - 0.16666667f * fTemp237 * fVec62[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp230 + 3))) & 16383]) + 0.041666668f * fTemp237 * fTemp232 * fVec62[(IOTA0 - std::min<int>(8192, std::max<int>(0, iTemp230 + 4))) & 16383];
			float fTemp238 = fVec63[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp225)))) & 16383];
			fVec64[0] = fTemp238;
			fRec114[0] = fVec64[1] - (fTemp226 + (2.0f - fRec115[0])) * (fRec114[1] - fTemp238) / (fRec115[0] - fTemp226);
			fRec113[0] = -(fConst42 * (fConst41 * fRec113[1] - (fRec114[0] + fRec114[1])));
			fRec112[0] = fRec113[0] - fConst36 * (fConst34 * fRec112[2] + fConst29 * fRec112[1]);
			fRec111[0] = fConst36 * (fRec112[2] + fRec112[0] + 2.0f * fRec112[1]) - fConst33 * (fConst31 * fRec111[2] + fConst29 * fRec111[1]);
			float fTemp239 = fRec111[2] + fRec111[0] + 2.0f * fRec111[1];
			fVec65[0] = fTemp239;
			fRec110[0] = -(fConst43 * (fConst26 * fRec110[1] - fConst33 * (fTemp239 + fVec65[1])));
			fRec109[0] = fRec110[0] - fConst25 * (fConst23 * fRec109[2] + fConst19 * fRec109[1]);
			fRec108[0] = fConst25 * (fRec109[2] + fRec109[0] + 2.0f * fRec109[1]) - fConst22 * (fConst21 * fRec108[2] + fConst19 * fRec108[1]);
			fRec118[0] = -(fConst43 * (fConst26 * fRec118[1] - fConst44 * (fTemp239 - fVec65[1])));
			fRec117[0] = fRec118[0] - fConst25 * (fConst23 * fRec117[2] + fConst19 * fRec117[1]);
			fRec116[0] = fConst45 * (fRec117[2] + (fRec117[0] - 2.0f * fRec117[1])) - fConst22 * (fConst21 * fRec116[2] + fConst19 * fRec116[1]);
			float fTemp240 = fConst19 * fRec119[1];
			fRec122[0] = -(fConst42 * (fConst41 * fRec122[1] - fConst30 * (fRec114[0] - fRec114[1])));
			fRec121[0] = fRec122[0] - fConst36 * (fConst34 * fRec121[2] + fConst29 * fRec121[1]);
			fRec120[0] = fConst48 * (fRec121[2] + (fRec121[0] - 2.0f * fRec121[1])) - fConst33 * (fConst31 * fRec120[2] + fConst29 * fRec120[1]);
			fRec119[0] = fConst49 * (fRec120[2] + (fRec120[0] - 2.0f * fRec120[1])) - fConst47 * (fConst46 * fRec119[2] + fTemp240);
			float fTemp241 = fTemp6 * (0.8f * (fRec119[2] + fConst47 * (fTemp240 + fConst46 * fRec119[0])) + fConst22 * (fConst18 * (fRec116[2] + (fRec116[0] - 2.0f * fRec116[1])) + 0.6f * (fRec108[2] + fRec108[0] + 2.0f * fRec108[1]))) + fRec100 + fRec99[1];
			fVec66[IOTA0 & 1023] = fTemp241;
			fRec98[0] = fSlow53 * (fTemp104 * (fTemp93 * (fTemp94 * (0.041666668f * fTemp95 * fVec66[(IOTA0 - iTemp103) & 1023] - 0.16666667f * fTemp96 * fVec66[(IOTA0 - iTemp102) & 1023]) + 0.25f * fTemp97 * fVec66[(IOTA0 - iTemp101) & 1023]) - 0.16666667f * fTemp98 * fVec66[(IOTA0 - iTemp100) & 1023]) + 0.041666668f * fTemp99 * fVec66[(IOTA0 - iTemp91) & 1023]) + fSlow0 * fRec98[1];
			float fTemp242 = std::cos(fRec9[0]);
			float fTemp243 = fTemp242 * fRec98[0];
			float fTemp244 = fTemp220 * fRec96[1];
			float fTemp245 = fRec2[0] * fTemp242 - fTemp220 * fRec95[1];
			fVec67[IOTA0 & 16383] = fTemp245 + (fTemp244 - fTemp243);
			float fTemp246 = fVec67[(IOTA0 - iTemp147) & 16383];
			fVec68[0] = fTemp246;
			fRec97[0] = 0.70710677f * (fTemp146 * fTemp246 / fTemp145 + fVec68[1]) - fRec97[1] * fTemp146 / fTemp145;
			fRec95[0] = fRec97[0];
			fRec124[0] = 0.9999f * (fRec124[1] + float(iTemp7 * iSlow56)) + fSlow57;
			float fTemp247 = fRec124[0] + -1.49999f;
			float fTemp248 = std::floor(fTemp247);
			float fTemp249 = fRec124[0] - fTemp248;
			float fTemp250 = fTemp248 + (2.0f - fRec124[0]);
			fVec69[IOTA0 & 16383] = fTemp245 + (fTemp243 - fTemp244);
			float fTemp251 = fVec69[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp247)))) & 16383];
			fVec70[0] = fTemp251;
			fRec123[0] = 0.70710677f * (fTemp250 * fTemp251 / fTemp249 + fVec70[1]) - fRec123[1] * fTemp250 / fTemp249;
			fRec96[0] = fRec123[0];
			float fTemp252 = fTemp242 * fRec95[1] + fTemp220 * fRec2[0];
			float fTemp253 = fTemp242 * fRec96[1] + fTemp220 * fRec98[0];
			float fTemp254 = fTemp242 * fTemp253;
			float fTemp255 = fTemp220 * fRec126[1];
			float fTemp256 = fTemp242 * fTemp252 - fTemp220 * fRec125[1];
			fVec71[IOTA0 & 16383] = fTemp256 + (fTemp255 - fTemp254);
			float fTemp257 = fVec71[(IOTA0 - iTemp174) & 16383];
			fVec72[0] = fTemp257;
			fRec127[0] = 0.70710677f * (fTemp169 * fTemp257 / fTemp168 + fVec72[1]) - fRec127[1] * fTemp169 / fTemp168;
			fRec125[0] = fRec127[0];
			fVec73[IOTA0 & 16383] = fTemp256 + (fTemp254 - fTemp255);
			float fTemp258 = fVec73[(IOTA0 - iTemp163) & 16383];
			fVec74[0] = fTemp258;
			fRec128[0] = 0.70710677f * (fTemp162 * fTemp258 / fTemp161 + fVec74[1]) - fTemp162 * fRec128[1] / fTemp161;
			fRec126[0] = fRec128[0];
			float fTemp259 = fTemp242 * fRec125[1] + fTemp220 * fTemp252;
			float fTemp260 = fTemp242 * fRec126[1] + fTemp220 * fTemp253;
			float fTemp261 = fTemp242 * fTemp260;
			float fTemp262 = fTemp220 * fRec130[1];
			float fTemp263 = fTemp242 * fTemp259 - fTemp220 * fRec129[1];
			fVec75[IOTA0 & 16383] = fTemp263 + (fTemp262 - fTemp261);
			float fTemp264 = fVec75[(IOTA0 - iTemp180) & 16383];
			fVec76[0] = fTemp264;
			fRec131[0] = 0.70710677f * (fTemp179 * fTemp264 / fTemp178 + fVec76[1]) - fRec131[1] * fTemp179 / fTemp178;
			fRec129[0] = fRec131[0];
			fRec133[0] = 0.9999f * (fRec133[1] + float(iTemp7 * iSlow58)) + fSlow59;
			float fTemp265 = fRec133[0] + -1.49999f;
			float fTemp266 = std::floor(fTemp265);
			float fTemp267 = fRec133[0] - fTemp266;
			float fTemp268 = fTemp266 + (2.0f - fRec133[0]);
			fVec77[IOTA0 & 16383] = fTemp263 + (fTemp261 - fTemp262);
			float fTemp269 = fVec77[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp265)))) & 16383];
			fVec78[0] = fTemp269;
			fRec132[0] = 0.70710677f * (fTemp268 * fTemp269 / fTemp267 + fVec78[1]) - fRec132[1] * fTemp268 / fTemp267;
			fRec130[0] = fRec132[0];
			float fTemp270 = fTemp242 * fRec129[1] + fTemp220 * fTemp259;
			fRec137[0] = 0.9999f * (fRec137[1] + float(iTemp7 * iSlow60)) + fSlow61;
			float fTemp271 = fRec137[0] + -1.49999f;
			float fTemp272 = std::floor(fTemp271);
			float fTemp273 = fRec137[0] - fTemp272;
			float fTemp274 = fTemp272 + (2.0f - fRec137[0]);
			float fTemp275 = fTemp242 * fRec130[1] + fTemp220 * fTemp260;
			float fTemp276 = fTemp242 * fTemp275;
			float fTemp277 = fTemp220 * fRec135[1];
			float fTemp278 = fTemp242 * fTemp270 - fTemp220 * fRec134[1];
			fVec79[IOTA0 & 16383] = fTemp278 + (fTemp277 - fTemp276);
			float fTemp279 = fVec79[(IOTA0 - std::min<int>(8192, std::max<int>(0, int(fTemp271)))) & 16383];
			fVec80[0] = fTemp279;
			fRec136[0] = 0.70710677f * (fTemp274 * fTemp279 / fTemp273 + fVec80[1]) - fRec136[1] * fTemp274 / fTemp273;
			fRec134[0] = fRec136[0];
			fVec81[IOTA0 & 16383] = fTemp278 + (fTemp276 - fTemp277);
			float fTemp280 = fVec81[(IOTA0 - iTemp196) & 16383];
			fVec82[0] = fTemp280;
			fRec138[0] = 0.70710677f * (fTemp195 * fTemp280 / fTemp194 + fVec82[1]) - fTemp195 * fRec138[1] / fTemp194;
			fRec135[0] = fRec138[0];
			fRec0[IOTA0 & 8191] = fTemp242 * fRec134[1] + fTemp220 * fTemp270;
			fRec1[IOTA0 & 8191] = fTemp242 * fRec135[1] + fTemp220 * fTemp275;
			fRec139[0] = fConst54 + (fRec139[1] - std::floor(fConst54 + fRec139[1]));
			fRec140[0] = fSlow62 + fConst2 * fRec140[1];
			float fTemp281 = std::pow(fRec140[0], 1.5f);
			float fTemp282 = fConst0 * (0.003f * fTemp281 * std::sin(6.2831855f * (fRec139[0] + (0.25f - std::floor(fRec139[0] + 0.25f)))) + 0.006f);
			int iTemp283 = int(fTemp282);
			float fTemp284 = std::floor(fTemp282);
			fRec141[0] = fConst55 + (fRec141[1] - std::floor(fConst55 + fRec141[1]));
			float fTemp285 = fConst0 * (0.003f * fTemp281 * std::sin(6.2831855f * (fRec141[0] - std::floor(fRec141[0]))) + 0.006f);
			int iTemp286 = int(fTemp285);
			float fTemp287 = std::floor(fTemp285);
			float fTemp288 = 0.7853982f * std::min<float>(1.0f, 1.6666666f * fRec140[0]);
			float fTemp289 = std::sin(fTemp288);
			float fTemp290 = std::cos(fTemp288);
			output0[i0] = FAUSTFLOAT(1.17f * fRec0[IOTA0 & 8191] * fTemp290 + 0.585f * fTemp289 * (fRec0[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp283))) & 8191] * (fTemp284 + (1.0f - fTemp282)) + fRec0[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp286))) & 8191] * (fTemp287 + (1.0f - fTemp285)) + (fTemp285 - fTemp287) * fRec0[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp286 + 1))) & 8191] + (fTemp282 - fTemp284) * fRec0[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp283 + 1))) & 8191]));
			float fTemp291 = fConst0 * (0.003f * fTemp281 * std::sin(6.2831855f * (fRec139[0] + (0.75f - std::floor(fRec139[0] + 0.75f)))) + 0.006f);
			int iTemp292 = int(fTemp291);
			float fTemp293 = std::floor(fTemp291);
			float fTemp294 = fConst0 * (0.003f * fTemp281 * std::sin(6.2831855f * (fRec141[0] + (0.5f - std::floor(fRec141[0] + 0.5f)))) + 0.006f);
			int iTemp295 = int(fTemp294);
			float fTemp296 = std::floor(fTemp294);
			output1[i0] = FAUSTFLOAT(1.17f * fRec1[IOTA0 & 8191] * fTemp290 + 0.585f * fTemp289 * (fRec1[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp292))) & 8191] * (fTemp293 + (1.0f - fTemp291)) + fRec1[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp295))) & 8191] * (fTemp296 + (1.0f - fTemp294)) + (fTemp294 - fTemp296) * fRec1[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp295 + 1))) & 8191] + (fTemp291 - fTemp293) * fRec1[(IOTA0 - std::min<int>(4097, std::max<int>(0, iTemp292 + 1))) & 8191]));
			iVec0[1] = iVec0[0];
			fRec9[1] = fRec9[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			IOTA0 = IOTA0 + 1;
			fRec10[1] = fRec10[0];
			fRec7[1] = fRec7[0];
			fRec5[1] = fRec5[0];
			fRec3[1] = fRec3[0];
			fRec20[1] = fRec20[0];
			fRec22[1] = fRec22[0];
			fRec26[1] = fRec26[0];
			fVec7[1] = fVec7[0];
			fRec25[1] = fRec25[0];
			fRec23[1] = fRec23[0];
			fRec28[1] = fRec28[0];
			fVec9[1] = fVec9[0];
			fRec27[1] = fRec27[0];
			fRec24[1] = fRec24[0];
			fRec32[1] = fRec32[0];
			fVec11[1] = fVec11[0];
			fRec31[1] = fRec31[0];
			fRec29[1] = fRec29[0];
			fRec34[1] = fRec34[0];
			fVec13[1] = fVec13[0];
			fRec33[1] = fRec33[0];
			fRec30[1] = fRec30[0];
			fRec38[1] = fRec38[0];
			fVec15[1] = fVec15[0];
			fRec37[1] = fRec37[0];
			fRec35[1] = fRec35[0];
			fRec40[1] = fRec40[0];
			fVec17[1] = fVec17[0];
			fRec39[1] = fRec39[0];
			fRec36[1] = fRec36[0];
			fRec44[1] = fRec44[0];
			fVec19[1] = fVec19[0];
			fRec43[1] = fRec43[0];
			fRec41[1] = fRec41[0];
			fRec46[1] = fRec46[0];
			fVec21[1] = fVec21[0];
			fRec45[1] = fRec45[0];
			fRec42[1] = fRec42[0];
			fRec50[1] = fRec50[0];
			fVec23[1] = fVec23[0];
			fRec49[1] = fRec49[0];
			fRec47[1] = fRec47[0];
			fRec52[1] = fRec52[0];
			fVec25[1] = fVec25[0];
			fRec51[1] = fRec51[0];
			fRec48[1] = fRec48[0];
			fRec53[1] = fRec53[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fVec28[1] = fVec28[0];
			fRec21[1] = fRec21[0];
			fRec59[1] = fRec59[0];
			fRec61[1] = fRec61[0];
			fVec31[1] = fVec31[0];
			fRec60[1] = fRec60[0];
			fVec33[1] = fVec33[0];
			fRec58[1] = fRec58[0];
			fRec56[1] = fRec56[0];
			fRec63[1] = fRec63[0];
			fVec35[1] = fVec35[0];
			fRec62[1] = fRec62[0];
			fRec57[1] = fRec57[0];
			fRec67[1] = fRec67[0];
			fVec37[1] = fVec37[0];
			fRec66[1] = fRec66[0];
			fRec64[1] = fRec64[0];
			fRec69[1] = fRec69[0];
			fVec39[1] = fVec39[0];
			fRec68[1] = fRec68[0];
			fRec65[1] = fRec65[0];
			fRec73[1] = fRec73[0];
			fVec41[1] = fVec41[0];
			fRec72[1] = fRec72[0];
			fRec70[1] = fRec70[0];
			fRec75[1] = fRec75[0];
			fVec43[1] = fVec43[0];
			fRec74[1] = fRec74[0];
			fRec71[1] = fRec71[0];
			fRec79[1] = fRec79[0];
			fVec45[1] = fVec45[0];
			fRec78[1] = fRec78[0];
			fRec76[1] = fRec76[0];
			fRec81[1] = fRec81[0];
			fVec47[1] = fVec47[0];
			fRec80[1] = fRec80[0];
			fRec77[1] = fRec77[0];
			fRec85[1] = fRec85[0];
			fVec49[1] = fVec49[0];
			fRec84[1] = fRec84[0];
			fRec82[1] = fRec82[0];
			fRec87[1] = fRec87[0];
			fVec51[1] = fVec51[0];
			fRec86[1] = fRec86[0];
			fRec83[1] = fRec83[0];
			fVec54[1] = fVec54[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fVec55[1] = fVec55[0];
			fRec15[1] = fRec15[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec90[1] = fRec90[0];
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fRec88[2] = fRec88[1];
			fRec88[1] = fRec88[0];
			fRec94[1] = fRec94[0];
			fRec93[2] = fRec93[1];
			fRec93[1] = fRec93[0];
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fRec91[2] = fRec91[1];
			fRec91[1] = fRec91[0];
			fRec2[1] = fRec2[0];
			fRec107[2] = fRec107[1];
			fRec107[1] = fRec107[0];
			fRec105[1] = fRec105[0];
			fRec103[1] = fRec103[0];
			fRec101[1] = fRec101[0];
			fRec99[1] = fRec99[0];
			fRec115[1] = fRec115[0];
			fVec64[1] = fVec64[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fRec112[2] = fRec112[1];
			fRec112[1] = fRec112[0];
			fRec111[2] = fRec111[1];
			fRec111[1] = fRec111[0];
			fVec65[1] = fVec65[0];
			fRec110[1] = fRec110[0];
			fRec109[2] = fRec109[1];
			fRec109[1] = fRec109[0];
			fRec108[2] = fRec108[1];
			fRec108[1] = fRec108[0];
			fRec118[1] = fRec118[0];
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fRec116[2] = fRec116[1];
			fRec116[1] = fRec116[0];
			fRec122[1] = fRec122[0];
			fRec121[2] = fRec121[1];
			fRec121[1] = fRec121[0];
			fRec120[2] = fRec120[1];
			fRec120[1] = fRec120[0];
			fRec119[2] = fRec119[1];
			fRec119[1] = fRec119[0];
			fRec98[1] = fRec98[0];
			fVec68[1] = fVec68[0];
			fRec97[1] = fRec97[0];
			fRec95[1] = fRec95[0];
			fRec124[1] = fRec124[0];
			fVec70[1] = fVec70[0];
			fRec123[1] = fRec123[0];
			fRec96[1] = fRec96[0];
			fVec72[1] = fVec72[0];
			fRec127[1] = fRec127[0];
			fRec125[1] = fRec125[0];
			fVec74[1] = fVec74[0];
			fRec128[1] = fRec128[0];
			fRec126[1] = fRec126[0];
			fVec76[1] = fVec76[0];
			fRec131[1] = fRec131[0];
			fRec129[1] = fRec129[0];
			fRec133[1] = fRec133[0];
			fVec78[1] = fVec78[0];
			fRec132[1] = fRec132[0];
			fRec130[1] = fRec130[0];
			fRec137[1] = fRec137[0];
			fVec80[1] = fVec80[0];
			fRec136[1] = fRec136[0];
			fRec134[1] = fRec134[0];
			fVec82[1] = fVec82[0];
			fRec138[1] = fRec138[0];
			fRec135[1] = fRec135[0];
			fRec139[1] = fRec139[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "VerbScript.dsp"
	#define FAUST_CLASS_NAME "_VerbScript"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _VerbScript -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 5
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("Damping", fHslider0, 0.3f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Decay", fHslider2, 0.5f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Diffusion", fHslider1, 0.84f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Modulation", fHslider4, 0.32f, 0.0f, 1.0f, 0.001f);
	FAUST_ADDHORIZONTALSLIDER("Size", fHslider3, 0.32f, 0.0f, 1.0f, 0.001f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Damping, "Damping", fHslider0, 0.3f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Decay, "Decay", fHslider2, 0.5f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Diffusion, "Diffusion", fHslider1, 0.84f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Modulation, "Modulation", fHslider4, 0.32f, 0.0f, 1.0f, 0.001f) \
		p(HORIZONTALSLIDER, Size, "Size", fHslider3, 0.32f, 0.0f, 1.0f, 0.001f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
