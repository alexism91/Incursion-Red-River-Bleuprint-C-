#include "IRRMissionVariable.h"

FIRRMissionVariable::FIRRMissionVariable() {
    this->Type = EIRRMissionVariableType::Integer;
    this->IntegerValue = 0;
    this->FloatValue = 0.00f;
    this->BoolValue = false;
    this->bAdditive = false;
}

