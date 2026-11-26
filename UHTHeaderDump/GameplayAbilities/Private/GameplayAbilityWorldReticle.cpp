#include "GameplayAbilityWorldReticle.h"

AGameplayAbilityWorldReticle::AGameplayAbilityWorldReticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFaceOwnerFlat = true;
    this->bSnapToTargetedActor = false;
    this->bIsTargetValid = true;
    this->bIsTargetAnActor = false;
    this->PrimaryPC = NULL;
    this->TargetingActor = NULL;
}






void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D) {
}


