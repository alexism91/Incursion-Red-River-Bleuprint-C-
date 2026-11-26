#include "GlobalMaterialParameter.h"

FGlobalMaterialParameter::FGlobalMaterialParameter() {
    this->MaterialParameterCollection = NULL;
    this->bScalarParameter = false;
    this->TargetFloatValue = 0.00f;
    this->bOverrideTransitionGraph = false;
    this->FLineTransition = NULL;
}

