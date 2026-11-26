#include "IRRNightVision_Subsystem.h"

UIRRNightVision_Subsystem::UIRRNightVision_Subsystem() {
    this->InfraredMPC = NULL;
}

void UIRRNightVision_Subsystem::UnregisterInfraredDevice(UActorComponent* InfraredDevice) {
}

void UIRRNightVision_Subsystem::SetNightVisionColor(const FLinearColor& Color) {
}

void UIRRNightVision_Subsystem::SetInfraredMaterialParameterCollection(UObject* WorldContextObject, UMaterialParameterCollection* MPC) {
}

void UIRRNightVision_Subsystem::RegisterInfraredDevice(UActorComponent* InfraredDevice) {
}

bool UIRRNightVision_Subsystem::IsInfraredModeEnabledOnPlayer() const {
    return false;
}

TArray<UActorComponent*> UIRRNightVision_Subsystem::GetInfraredDevices() const {
    return TArray<UActorComponent*>();
}

void UIRRNightVision_Subsystem::EnableInfraredMode() {
}

void UIRRNightVision_Subsystem::DisableInfraredMode() {
}


