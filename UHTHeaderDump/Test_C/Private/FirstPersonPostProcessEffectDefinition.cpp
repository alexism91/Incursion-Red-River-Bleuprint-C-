#include "FirstPersonPostProcessEffectDefinition.h"

UFirstPersonPostProcessEffectDefinition::UFirstPersonPostProcessEffectDefinition() {
    this->bExactTagMatch = false;
    this->MaterialParameterCollection = NULL;
    this->RTPC = NULL;
    this->ActiveScalarValue = 1.00f;
    this->InactiveScalarValue = 0.00f;
    this->BlendSpeed = 5.00f;
    this->BlendableWeight = 1.00f;
}


