#include "AudioMaterialKnob.h"

UAudioMaterialKnob::UAudioMaterialKnob() {
    this->Value = 1.00f;
    this->TuneSpeed = 0.20f;
    this->FineTuneSpeed = 0.05f;
    this->bLocked = false;
    this->bMouseUsesStep = false;
    this->StepSize = 0.01f;
}

void UAudioMaterialKnob::SetValue(float InValue) {
}

void UAudioMaterialKnob::SetTuneSpeed(float InValue) {
}

void UAudioMaterialKnob::SetStepSize(float InValue) {
}

void UAudioMaterialKnob::SetMouseUsesStep(bool InUsesStep) {
}

void UAudioMaterialKnob::SetLocked(bool InLocked) {
}

void UAudioMaterialKnob::SetFineTuneSpeed(float InValue) {
}

float UAudioMaterialKnob::GetValue() {
    return 0.0f;
}

float UAudioMaterialKnob::GetTuneSpeed() const {
    return 0.0f;
}

float UAudioMaterialKnob::GetStepSize() const {
    return 0.0f;
}

bool UAudioMaterialKnob::GetMouseUsesStep() const {
    return false;
}

bool UAudioMaterialKnob::GetIsLocked() const {
    return false;
}

float UAudioMaterialKnob::GetFineTuneSpeed() const {
    return 0.0f;
}


