#include "DefaultItem.h"

FDefaultItem::FDefaultItem() {
    this->ItemType = EDefaultItemType::Preset;
    this->ItemPreset = NULL;
    this->ItemDefinition = NULL;
    this->Count = 0;
    this->bKeepSwapSpaceFree = false;
}

