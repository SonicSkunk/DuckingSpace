#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace faustverbscript_impl
{
// ==============================| Node & Parameter type declarations |==============================

namespace faustverbscript_t_parameters
{
// Parameter list for faustverbscript_impl::faustverbscript_t --------------------------------------

DECLARE_PARAMETER_RANGE_STEP(DecayRange, 
                             0.1, 
                             12., 
                             0.1);

template <int NV>
using Decay = parameter::from0To1<project::VerbScript<NV>, 
                                  6, 
                                  DecayRange>;

DECLARE_PARAMETER_RANGE_STEP(SizeRange, 
                             0.5, 
                             5, 
                             0.01);

template <int NV>
using Size = parameter::from0To1<project::VerbScript<NV>, 
                                 7, 
                                 SizeRange>;

DECLARE_PARAMETER_RANGE_STEP(ModulationRange, 
                             0., 
                             1, 
                             0.01);

template <int NV>
using Modulation = parameter::from0To1<project::VerbScript<NV>, 
                                       4, 
                                       ModulationRange>;

DECLARE_PARAMETER_RANGE_STEP(ModFrequencyRange, 
                             0., 
                             1, 
                             0.01);

template <int NV>
using ModFrequency = parameter::from0To1<project::VerbScript<NV>, 
                                         5, 
                                         ModFrequencyRange>;

template <int NV>
using Damping = parameter::from0To1<project::VerbScript<NV>, 
                                    0, 
                                    ModulationRange>;

template <int NV>
using Diffusion = parameter::from0To1<project::VerbScript<NV>, 
                                      1, 
                                      ModulationRange>;

template <int NV>
using faustverbscript_t_plist = parameter::list<Decay<NV>, 
                                                Size<NV>, 
                                                Modulation<NV>, 
                                                ModFrequency<NV>, 
                                                Damping<NV>, 
                                                Diffusion<NV>>;
}

template <int NV>
using faustverbscript_t_ = container::chain<faustverbscript_t_parameters::faustverbscript_t_plist<NV>, 
                                            wrap::fix<2, project::VerbScript<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public faustverbscript_impl::faustverbscript_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(faustverbscript);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(102)
		{
			0x005B, 0x0000, 0x4400, 0x6365, 0x7961, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x0001, 0x0000, 0x6953, 0x657A, 0x0000, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0002, 
            0x0000, 0x6F4D, 0x7564, 0x616C, 0x6974, 0x6E6F, 0x0000, 0x0000, 
            0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 
            0x5B00, 0x0003, 0x0000, 0x6F4D, 0x4664, 0x6572, 0x7571, 0x6E65, 
            0x7963, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x8000, 0x003F, 0x0000, 0x5B00, 0x0004, 0x0000, 0x6144, 0x706D, 
            0x6E69, 0x0067, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0000, 0x3F80, 0x0000, 0x0000, 0x055B, 0x0000, 0x4400, 0x6669, 
            0x7566, 0x6973, 0x6E6F, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& faust = this->getT(0); // project::VerbScript<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, faust); // Decay -> faust::ReverbTime
		
		this->getParameterT(1).connectT(0, faust); // Size -> faust::Size
		
		this->getParameterT(2).connectT(0, faust); // Modulation -> faust::ModDepth
		
		this->getParameterT(3).connectT(0, faust); // ModFrequency -> faust::ModFrequency
		
		this->getParameterT(4).connectT(0, faust); // Damping -> faust::Damping
		
		this->getParameterT(5).connectT(0, faust); // Diffusion -> faust::Diffusion
		
		// Default Values --------------------------------------------------------------------------
		
		;                           // faust::Damping is automated
		;                           // faust::Diffusion is automated
		faust.setParameterT(2, 1.); // core::faust::HFGain
		faust.setParameterT(3, 1.); // core::faust::LFGain
		;                           // faust::ModDepth is automated
		;                           // faust::ModFrequency is automated
		;                           // faust::ReverbTime is automated
		;                           // faust::Size is automated
		
		this->setParameterT(0, 1.);
		this->setParameterT(1, 1.);
		this->setParameterT(2, 1.);
		this->setParameterT(3, 1.);
		this->setParameterT(4, 1.);
		this->setParameterT(5, 1.);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ======================================| Public Definition |======================================

namespace project
{
// polyphonic template declaration

template <int NV>
using faustverbscript = wrap::node<faustverbscript_impl::instance<NV>>;
}


