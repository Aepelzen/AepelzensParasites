#include "AepelzensParasites.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = "Aepelzens Parasites";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif

	p->addModel(createModel<WarpsWidget>("Aepelzens Parasites", "Warps", "Meta Modulator P", RING_MODULATOR_TAG, WAVESHAPER_TAG));
	//p->addModel(createModel<TidesWidget>("Aepelzens Parasites", "Tides", "Tides P", RING_MODULATOR_TAG, WAVESHAPER_TAG));
}
