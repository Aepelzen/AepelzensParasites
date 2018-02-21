SLUG = "Aepelzens Parasites"
VERSION = 0.6.0dev

FLAGS += \
	-DTEST -DPARASITES \
	-I./parasites \
	-Wno-unused-local-typedefs

SOURCES += $(wildcard src/*.cpp)
SOURCES += parasites/stmlib/utils/random.cc
SOURCES += parasites/stmlib/dsp/atan.cc
SOURCES += parasites/stmlib/dsp/units.cc
SOURCES += parasites/warps/dsp/modulator.cc
SOURCES += parasites/warps/dsp/oscillator.cc
SOURCES += parasites/warps/dsp/vocoder.cc
SOURCES += parasites/warps/dsp/filter_bank.cc
SOURCES += parasites/warps/resources.cc
SOURCES += parasites/tides/generator.cc
SOURCES += parasites/tides/resources.cc

DISTRIBUTABLES += $(wildcard LICENSE*) res

RACK_DIR ?= ../..
include $(RACK_DIR)/plugin.mk
