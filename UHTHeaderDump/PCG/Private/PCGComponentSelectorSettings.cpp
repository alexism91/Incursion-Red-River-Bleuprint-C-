#include "PCGComponentSelectorSettings.h"

FPCGComponentSelectorSettings::FPCGComponentSelectorSettings() {
    this->ComponentSelection = EPCGComponentSelection::ByTag;
    this->ComponentSelectionClass = NULL;
    this->bShowComponentSelection = false;
    this->bShowComponentSelectionClass = false;
}

