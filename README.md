# DuckingSpace

### If you're looking to download the VST plugin itself, please visit the downloads section on the [website](https://www.sonicskunk.com/#Downloads) for a direct download.

## Description
DuckingSpace is a reverb audio plugin with built-in sidechaining.
This allows the reverb to dynamically duck in response to the original signal, ensuring that your primary audio-signal remains clear and prominent while still benefiting from the depth and ambience that reverb provides.
It’s a great tool for achieving a massive yet clear sound in your mix.



## How to edit the plugin:

### Setting up the developer workspace
### Prerequisites
- [HISE](https://github.com/christophhart/HISE/tree/develop)
        Make sure you have a faust enabled version which you have to compile yourself. Always use the develop branch and the latest version.
- [FAUST](https://github.com/grame-cncm/faust)
        Is necessary for the reverb algorithm. (There is a compiled dll file included that you can use as a hardcoded fx scriptnode but then you won't be able to edit the algorithm)
- Basic understanding of how to use HISE/Scriptnodes

### Steps
1. Clone the repository:
   ```sh
   git clone https://github.com/SonicSkunk/DuckingSpace.git

2. Load the project:
   ```sh
        Open HISE
        Navigate to File -> Open Project Folder
        Select the DuckingSpace folder you just cloned

That's it, have fun!


This project is licensed under the GNU GENERAL PUBLIC LICENSE - see the LICENSE file for details.

### Acknowledgments

    HISE - The amazing framework used to develop this plugin
    FAUST - For the reverb algorithm.
    JUCE - The platform for building cross-platform audio applications
