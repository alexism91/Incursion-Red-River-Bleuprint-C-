#include "FirstPersonSway.h"

UFirstPersonSway::UFirstPersonSway() {
    this->MovementInterpSpeed = 25.00f;
    this->LookInterpSpeed = 25.00f;
}

FEquippableViewmodelValues UFirstPersonSway::GetEquippableViewmodelValues() {
    return FEquippableViewmodelValues{};
}


