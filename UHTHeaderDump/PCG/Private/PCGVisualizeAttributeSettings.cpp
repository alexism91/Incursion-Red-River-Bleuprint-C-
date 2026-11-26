#include "PCGVisualizeAttributeSettings.h"

UPCGVisualizeAttributeSettings::UPCGVisualizeAttributeSettings() {
    this->bPrefixWithIndex = true;
    this->bPrefixWithAttributeName = false;
    this->Duration = 30.00f;
    this->PointLimit = 4096;
    this->bVisualizeEnabled = true;
}


