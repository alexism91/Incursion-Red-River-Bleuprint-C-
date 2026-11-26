#include "PrivateMaterialParameter.h"

FPrivateMaterialParameter::FPrivateMaterialParameter() {
    this->DefaultValue = 0.00f;
    this->AimValue = 0.00f;
    this->bOverrideTransitionGraph = false;
    this->FLineTransition = NULL;
}

