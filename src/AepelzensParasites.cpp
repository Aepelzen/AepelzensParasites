#include "AepelzensParasites.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = TOSTRING(SLUG);
	p->version = TOSTRING(VERSION);

	p->addModel(modelWarps);
	p->addModel(modelTapeworm);
	p->addModel(modelTides);
}
