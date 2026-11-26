#include "IRRTabDescriptor.h"

FIRRTabDescriptor::FIRRTabDescriptor() {
    this->TabType = EIRRButtonType::Icon;
    this->bEnabled = false;
    this->TabButtonClass = NULL;
    this->TabContentClass = NULL;
    this->CreatedTabContentWidget = NULL;
}

