#include "WaterBodyMeshComponent.h"

UWaterBodyMeshComponent::UWaterBodyMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bComputeFastLocalBounds = true;
    this->bComputeBoundsOnceForGame = true;
    this->Mobility = EComponentMobility::Static;
    this->AlwaysLoadOnServer = false;
    this->CanCharacterStepUpOn = ECB_No;
}


