#include "InputModifierSmoothDelta.h"

UInputModifierSmoothDelta::UInputModifierSmoothDelta() {
    this->SmoothingMethod = ENormalizeInputSmoothingType::Lerp;
    this->Speed = 0.50f;
    this->EasingExponent = 2.00f;
}


