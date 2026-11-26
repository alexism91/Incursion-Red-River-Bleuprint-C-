#include "MeleeComponent.h"

UMeleeComponent::UMeleeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceLength = 100.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->bTraceComplex = false;
    this->Damage = 50.00f;
    this->bDebug = false;
    this->ImpactCameraShake = NULL;
}

void UMeleeComponent::OnMeleeAttackImpact_MC_Implementation(FHitResult HitResult) {
}



void UMeleeComponent::HandleOnAttackHit_Implementation(FHitResult HitResult, float DamageAmount) {
}

UMeleeDataAsset* UMeleeComponent::GetMeleeDataAsset() {
    return NULL;
}

TArray<AActor*> UMeleeComponent::GetIgnoredActors() {
    return TArray<AActor*>();
}

void UMeleeComponent::Attack() {
}


