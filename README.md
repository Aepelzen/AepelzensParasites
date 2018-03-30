# Aepelzens Parasites

This is a mod of some Audible Instruments Modules for VCV-Rack with the [parasites
firmware](https://mqtthiqs.github.io/parasites/index.html). All credit goes to the authors of these
two. It includes modules based on the Warps and Tides parasites. I do not own hardware versions of
these so if anybody who does could give some feedback on this, it would be greatly appreciated.

To switch modes use the right click-context menus. A detailed description off all the features can
be found [here](https://mqtthiqs.github.io/parasites/index.html).

## Note

The latest update renames the modules to comply with some copyright restrictions that i wasn't
aware of before. I kept the identifiers though so this should not break any saves.

## Wasp and Tapeworm (based on Warps Parasite)

These two modules are based on the Warps Parasite. To fix the multiple-instance problem from older
versions i took the delay code of the parasites firmware and split it out into it's own module called
Tapeworm. Wasp contains all the other modes except for the Doppler Panner which is disabled by
default. You can enable it by adding "-DDOPPLER_PANNER" to the build flags but you can still
only use one instance (that is set to Doppler mode).


## Cycles (based on Tides Parasite)

There is a known problem when running in harmonics mode. The octaves mode (mode switched to green
LED) sound very noisy, so for now you probably should not use that. Other than that everything seems
to work well. The sheep-firmware (wavetable-oscillator) is included but disabled by default. To
enable it add "-DWAVETABLE_HACK" to your build flags. That will break the Mode-button though so you
will no longer be able to use Tides as an envelope-generator. It is probably better to use the
original if you want sheep.

## Building

After clonig the repo run: git submodule update --init parasites/stmlib
