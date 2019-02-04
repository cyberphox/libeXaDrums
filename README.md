# libeXaDrums
A shared library for [eXaDrums](https://github.com/SpintroniK/eXaDrums).

 ExaDrums is a virtual drum module that allows drummers play with
 custom-made drum kits.
 
 It is user-friendly and combines high quality stereo sound with low
 latency.
 
 Each drum kit provides individual sliders in order to control the
 volume of its drum pads.
 
 A built-in metronome can be combined with a rhythm coach to make
 practice sessions easier and efficient.
 
 The drum triggers can be adjusted so that their response feels as
 natural as possible, and different sensor interfaces include a
 virtual (on-screen) multi pad and external sensors.
 
 Although eXaDrums is usable as a drum module, it is still an
 experimental project. As such, some features are not yet implemented,
 and the error management is not complete.
 
 This package provides the C++ headers.

## Table of content

- [Installation and Configuration](#installation)
    - [Dependencies](#dependencies)
    - [Installation](#installation)
    - [Configuration](#configuration)
- [Usage](#usage)
- [License](#license)
- [Links](#links)

## Installation

### Dependencies

libeXaDrums depends on Alsa and TinyXml2. You can install those two libraries using this command line: <br />
```
sudo apt install libasound2-dev libtinyxml2-dev
```
LibeXaDrums also depends on build-essential and autotools in order to build and install the binaries: 
```
sudo apt install autoconf automake libtool build-essential 
```
If you wish to build the Debian packages, you will need to install debhelper and pkg-config: 
```
sudo apt install debhelper pkg-config
```
You may also want to install git, so that you can clone this repository and install from it: 
```
sudo apt install git
git clone https://github.com/SpintroniK/libeXaDrums.git 
```

### Building libeXaDrums

Now that you have all dependencies, you can build libeXaDrums: 
```
cd libeXaDrums
autoreconf -fi
./configre
make
```
or you can build the Debian packages: 
```
cd libeXaDrums
dpkg-buildpackage -b -uc
```
If you have multiple cores/threads, you can speed up the build process by appending the option -jn to dpkg-buildpackage, where n is the number of threads that you want to use for the compilation. 
Example, for four threads type: `dpkg-buildpackage -b -uc -j4`.

### Installing libeXaDrums

If you have built libeXaDrums using make, use:

```sudo make install```

otherwise, if you built the Debian packages, install them normally: 

```
sudo dpkg -i libexadrums0_[...].deb
sudo dpkg -i libexadrums-dev[...].deb
```

## Usage

## License

## Links
