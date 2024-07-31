# DuckingSpace

## Description
DuckingSpace is a reverb audio plugin with built-in sidechaining to allow the reverb to duck the original signal.
For the moment DuckingSpace is only available as a 64-bit VST3 plugin but AU support is on the planning.

## Setting up the dev environment

### Prerequisites
- [HISE](https://github.com/christophhart/HISE/tree/develop)
        Make sure you have a faust enabled version which you have to compile yourself. Always use the develop branch and the latest version.
- [FAUST](https://github.com/grame-cncm/faust)
        necessary for the reverb algorithm. (There is a compiled dll file included that you can use as a hardcoded fx scriptnode but then you won't be able to edit the algorithm.
        If you want to edit the faust code you will have to compile a dll file yourself when you're done before you can compile the eventual plugin.
- Basic understanding of how to use HISE/Scriptnodes

### Steps
1. Clone the repository:
   ```sh
   git clone https://github.com/SonicSkunk/DuckingSpace.git

    Open HISE and load the project:
        Open HISE
        Navigate to File -> Open Project Folder
        Select the DuckingSpace folder you just cloned

That's it, you're ready to work on the plugin.



### Plugin Usage:

    Load DuckingSpace in your DAW as an audio effect plugin.    
    Route the input signal (e.g., vocals, lead synth) into DuckingSpace.
    Adjust the ducking parameter to achieve a cleaner mix with the reverb ducking the original signal.
    
    The plugin has the following parameters you can control:
        Ducking: Sets the amount of sidechaining applied. Make sure you have decent input levels.
        Speed: Controls the attack and release time of the compressor.
        Decay: Sets the length of the reverb's tail.
        Size: The perceived size of the virtual space.
        Modulation: the amount of pitch modulation applied to the reverb.
        Damping: The amount of damping in the virtual space
        Diffusion: How much the sound gets diffused in the virtual space
        Color: A compressor to brighter or darken the sound. Middle position is neutral.
        Dry/Wet: The mix of the dry signal and the reverb.

    Gain staging is important to achieve the best results:

    A signal that is too low will not trigger much ducking effect even when the settings are turned up.
    A signal that is too loud may induce ducking even when the effect is turned all the way down.



This project is licensed under the GNU GENERAL PUBLIC LICENSE - see the LICENSE file for details.

### Acknowledgments

    HISE - The amazing framework used to develop this plugin
    FAUST - For the reverb algorithm.
    JUCE - The platform for building cross-platform audio applications
