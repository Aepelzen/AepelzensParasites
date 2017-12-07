# Aepelzens Parasites

This is a small  mod to make Audible Instruments Warps for vcv work with the parasites firmware.
All credit goes to the authors of these two.

This is a work in progress. Currently there are problems with various modes when using multiple instances (at least the frequency shifter and delay). These happen because the parasites firmware uses static variables. I'm not sure how to solve that yet.

After clonig the repo run:
git submodule update --init parasites/stmlib
