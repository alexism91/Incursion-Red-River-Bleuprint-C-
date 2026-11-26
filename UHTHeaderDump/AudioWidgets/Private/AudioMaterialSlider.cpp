#include "AudioMaterialSlider.h"

UAudioMaterialSlider::UAudioMaterialSlider() {
    this->Value = 1.00f;
    this->Orientation = Orient_Horizontal;
    this->TuneSpeed = 0.20f;
    this->FineTuneSpeed = 0.05f;
    this->bLocked = false;
    this->bMouseUsesStep = false;
    this->StepSize = 0.01f;
}

void UAudioMaterialSlider::SetValue(float InValue) {
}

void UAudioMaterialSlider::SetTuneSpeed(const float InValue) {
}

void UAudioMaterialSlider::SetStepSize(float InValue) {
}

void UAudioMaterialSlider::SetMouseUsesStep(bool bInUsesStep) {
}

void UAudioMaterialSlider::SetLocked(bool bInLocked) {
}

void UAudioMaterialSlider::SetFineTuneSpeed(const float InValue) {
}

float UAudioMaterialSlider::GetValue() const {
    return 0.0f;
}

float UAudioMaterialSlider::GetTuneSpeed() const {
    return 0.0f;
}

float UAudioMaterialSlider::GetStepSize() const {
    return 0.0f;
}

bool UAudioMaterialSlider::GetMouseUsesStep() const {
    return false;
}

bool UAudioMaterialSlider::GetIsLocked() const {
    return false;
}

float UAudioMaterialSlider::GetFineTuneSpeed() const {
    return 0.0f;
}


