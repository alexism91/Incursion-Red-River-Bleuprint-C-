#include "QuerySettings.h"

UQuerySettings::UQuerySettings() {
    this->UpdateSplitFactor = 1;
    this->MaxPayloadBounds = 100000;
    this->MaxChildrenInLeaf = 12;
    this->MaxTreeDepth = 16;
    this->CellSize = 5000;
}


