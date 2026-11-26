#include "LPSPExplosionComponent.h"

ULPSPExplosionComponent::ULPSPExplosionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bImpulse = true;
    this->ImpulseMethod = Point;
    this->ImpulseFalloff = RIF_Constant;
    this->bUseImpulsePrevention = false;
    this->ImpulsePreventionChannel = TraceTypeQuery1;
    this->bDamage = true;
    this->DamageMethod = Point;
    this->bUseDamagePrevention = false;
    this->DamagePreventionChannel = TraceTypeQuery1;
    this->bShake = true;
    this->ShakeFalloff = 1.00f;
    this->ShakeInnerRadius = 0.00f;
    this->ShakeOuterRadius = 1000.00f;
    this->bDebugRadialImpulsePrevention = false;
    this->bDebugRadialDamagePrevention = false;
}

void ULPSPExplosionComponent::TryApplyImpulse(const FHitResult Result, const float Multiplier) const {
}

void ULPSPExplosionComponent::TryApplyDamage(const FHitResult Result) const {
}

void ULPSPExplosionComponent::StartShake(const int32 Index) const {
}

float ULPSPExplosionComponent::GetRadiusValue() const {
    return 0.0f;
}

void ULPSPExplosionComponent::DrawDebugRadius(const FLinearColor Color, const float Duration) const {
}

void ULPSPExplosionComponent::ApplyRadialImpulse(float Multiplier) const {
}

void ULPSPExplosionComponent::ApplyRadialDamage() const {
}

void ULPSPExplosionComponent::ApplyPointImpulse(const FHitResult Result) const {
}

void ULPSPExplosionComponent::ApplyPointDamage(const FHitResult Result) const {
}


