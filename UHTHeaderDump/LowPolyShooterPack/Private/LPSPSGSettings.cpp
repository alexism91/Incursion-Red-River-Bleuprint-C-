#include "LPSPSGSettings.h"

ULPSPSGSettings::ULPSPSGSettings() {
    this->FieldOfView = 97;
    this->Sensitivity = 0.75f;
}

void ULPSPSGSettings::SetSensitivity(const float Value) {
}

void ULPSPSGSettings::SetFieldOfView(const int32 Value) {
}

float ULPSPSGSettings::GetSensitivity() const {
    return 0.0f;
}

int32 ULPSPSGSettings::GetFieldOfView() const {
    return 0;
}


