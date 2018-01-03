#include "AepelzensParasites.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = "Aepelzens Parasites";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif

	p->addModel(createModel<WarpsWidget>("Aepelzens Parasites", "Warps", "Wasp", RING_MODULATOR_TAG, WAVESHAPER_TAG, EFFECT_TAG));
	p->addModel(createModel<TapewormWidget>("Aepelzens Parasites", "Tapeworm", "Tapeworm", EFFECT_TAG,DELAY_TAG));
	p->addModel(createModel<TidesWidget>("Aepelzens Parasites", "Tides", "Cycles", LFO_TAG, OSCILLATOR_TAG, WAVESHAPER_TAG, FUNCTION_GENERATOR_TAG, RANDOM_TAG));
}
