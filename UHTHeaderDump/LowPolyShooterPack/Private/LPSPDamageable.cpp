#include "LPSPDamageable.h"

ALPSPDamageable::ALPSPDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGroundChecks = false;
    this->GroundCheckDelay = 0.10f;
}

void ALPSPDamageable::SetGroundCheckTypes(const TArray<TEnumAsByte<EObjectTypeQuery>> Value) {
}

void ALPSPDamageable::SetGroundChecks(const bool Value) {
}

void ALPSPDamageable::SetGroundCheckDelay(const float Value) {
}



TArray<TEnumAsByte<EObjectTypeQuery>> ALPSPDamageable::GetGroundCheckTypes() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

bool ALPSPDamageable::GetGroundChecks() const {
    return false;
}

float ALPSPDamageable::GetGroundCheckDelay() const {
    return 0.0f;
}


