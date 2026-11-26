#include "AdvancedAkComponent.h"

UAdvancedAkComponent::UAdvancedAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSignificance = true;
    this->bUseAttenuationDistance = true;
    this->SignificanceRange = 5000;
    this->bAnchorToListenerWhenLocallyControlled = false;
    this->ListenerAnchorDropDistance = 50.00f;
    this->bTrackAcousticEnvironment = false;
    this->AcousticSubsystem = NULL;
}

bool UAdvancedAkComponent::IsAcousticallyIndoors() const {
    return false;
}

bool UAdvancedAkComponent::HasAcousticEnvironment() const {
    return false;
}

void UAdvancedAkComponent::HandleOwnerEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UAdvancedAkComponent::HandleOwnerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AActor* UAdvancedAkComponent::GetAcousticRoomActor() const {
    return NULL;
}

EIRRAcousticEnvironment UAdvancedAkComponent::GetAcousticEnvironment() const {
    return EIRRAcousticEnvironment::ExteriorField;
}


