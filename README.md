# Aepelzens Parasites

This is a mod of some Audible Instruments Modules for VCV-Rack with the [parasites
firmware](https://mqtthiqs.github.io/parasites/index.html). All credit goes to the authors of these
two. It includes Warps and Tides. I do not own hardware versions of these so if anybody who does
could give some feedback on this, it would be greatly appreciated.

## Warps

This is a work in progress. Currently there are problems with various modes when using
multiple instances (at least the frequency shifter and delay). These happen because the parasites
firmware uses static variables. You can still use multiple instances as long as only one is set to
delay and frequency shifter.

## Tides

There is a known problem when running in harmonics mode. The odd-harmonics (mode switched to green
LED) sound very noisy, so for now you probably should not use that. Other than that everything seems
to work well. The sheep-firmware (wavetable-oscillator) is included but disabled by default. To
enable it add "-DWAVETABLE_HACK" to your build flags. That will break the Mode-button though so you
will no longer be able to use Tides as an envelope-generator. It is probably better to use the
original if you want sheep.

## Building

After clonig the repo run: git submodule update --init parasites/stmlib

You also need libsamplerate to build these