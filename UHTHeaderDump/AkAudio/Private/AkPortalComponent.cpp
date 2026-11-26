#include "AkPortalComponent.h"

UAkPortalComponent::UAkPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bDynamic = false;
    this->InitialState = EAkAcousticPortalState::Open;
    this->InitialOcclusion = 0.00f;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionOcclusionTransition = false;
    this->ObstructionCollisionChannel = ECC_Visibility;
    this->AdjacentRoomBleed = 1.00f;
}

void UAkPortalComponent::SetTransition(bool bInDynamic) {
}

void UAkPortalComponent::SetPortalOcclusion(float InPortalOcclusion) {
}

void UAkPortalComponent::SetDynamic(bool bInDynamic) {
}

void UAkPortalComponent::SetAdjacentRoomBleed(float InAdjacentRoomBleed) {
}

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

float UAkPortalComponent::GetPortalOcclusion() const {
    return 0.0f;
}

EAkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return EAkAcousticPortalState::Closed;
}

void UAkPortalComponent::EnablePortal() {
}

void UAkPortalComponent::DisablePortal() {
}


