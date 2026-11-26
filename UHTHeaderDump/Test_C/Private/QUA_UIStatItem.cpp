#include "QUA_UIStatItem.h"

FQUA_UIStatItem::FQUA_UIStatItem() {
    this->StatIcon = NULL;
    this->ShowValue = false;
    this->Percent = false;
    this->round = false;
    this->InvertColour = false;
    this->ShowMax = false;
    this->Max = 0.00f;
    this->ShowUnit = false;
}

