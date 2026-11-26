#include "PickUpComponent.h"
#include "Net/UnrealNetwork.h"

UPickUpComponent::UPickUpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bIsHidden = false;
    this->bMeshHidden = false;
    this->bMeshHiddenShadows = false;
    this->PickUpOwner = NULL;
    this->LocPickupOwner = NULL;
    this->PrevPickupOwner = NULL;
    this->RootComponent = NULL;
    this->AnimationSettleTime = 1.50f;
    this->Presentation = EPickUpPresentation::Untouched;
}

void UPickUpComponent::WakeAnimation() {
}

void UPickUpComponent::UpdateActorOwner_Implementation(AActor* NewOwner, bool bNewIsHidden) {
}

void UPickUpComponent::SetWorn(bool bWorn) {
}

void UPickUpComponent::SetMeshHidden_Implementation(bool NewHidden, bool NewHiddenShadows) {
}

void UPickUpComponent::SetActorHidden_Implementation(bool NewHidden) {
}

void UPickUpComponent::RequestSimulatePhysics(bool bStart) {
}

void UPickUpComponent::RequestRenderStatic_Implementation(bool bStatic) {
}

void UPickUpComponent::PickUp() {
}

void UPickUpComponent::OnRep_Visibility() {
}

void UPickUpComponent::OnRep_PresentationState() {
}

void UPickUpComponent::OnRep_PickUpOwner() {
}

void UPickUpComponent::OnOwnItemUpdated(FPickUpContainerItem PickUpContainerItem) {
}

EPickUpPresentation UPickUpComponent::GetPresentation() const {
    return EPickUpPresentation::Untouched;
}

void UPickUpComponent::Drop(FTransform DropTransform, bool bOverrideTransform) {
}

void UPickUpComponent::ApplyItemState(const FGameplayTagContainer& NewItemState) {
}

void UPickUpComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPickUpComponent, bIsHidden);
    DOREPLIFETIME(UPickUpComponent, PickUpOwner);
    DOREPLIFETIME(UPickUpComponent, PresentationState);
}


