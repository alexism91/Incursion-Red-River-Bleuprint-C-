#include "LXRFlicker.h"

ULXRFlicker::ULXRFlicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bInitializeManually = false;
    this->bActive = true;
    this->RandomizeSeed = true;
    this->Seed = 0.00f;
    this->Speed = 1.00f;
    this->IntensityMultiplier = 1.00f;
    this->Posterization = 0.00f;
    this->bChangeLocation = false;
    this->ChangeLocationCurve = NULL;
    this->bChangeLocationSameForAllComponents = false;
    this->ChangeLocationSpeed = 2.00f;
    this->bUseEmissiveMaterial = false;
    this->EmissivePrimitiveTag = TEXT("Emissive");
    this->EmissiveParameterName = TEXT("Emissive");
    this->CurrentNoiseValue = 0.00f;
    this->SourceComponent = NULL;
}

void ULXRFlicker::SetFlickerState(bool NewState) {
}

void ULXRFlicker::Reset() {
}

void ULXRFlicker::InitializeFlicker() {
}

bool ULXRFlicker::GetFlickerState() {
    return false;
}


