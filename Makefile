FLAGS += \
	-DTEST -DPARASITES\
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
#SOURCES += parasites/tides/generator.cc
#SOURCES += parasites/tides/resources.cc

include ../../plugin.mk


dist: all
	mkdir -p dist/AepelzensParasites
	cp LICENSE* dist/AepelzensParasites/
	cp $(TARGET) dist/AepelzensParasites/
	cp -R res dist/AepelzensParasites/
	cd dist && zip -5 -r AepelzensParasites-$(VERSION)-$(ARCH).zip AepelzensParasites
