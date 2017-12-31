#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct TidesWidget : ModuleWidget {
	Panel *tidesPanel;
	TidesWidget();
	Menu *createContextMenu() override;
};

struct WarpsWidget : ModuleWidget {
	WarpsWidget();
	Menu *createContextMenu() override;
};
