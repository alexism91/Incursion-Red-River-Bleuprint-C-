#include "IRRButtonConstructor.h"

FIRRButtonConstructor::FIRRButtonConstructor() {
    this->ButtonType = EIRRButtonType::Icon;
    this->Content = NULL;
    this->bEnabled = false;
    this->ButtonClass = NULL;
}

