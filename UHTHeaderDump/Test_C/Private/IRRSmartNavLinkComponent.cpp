#include "IRRSmartNavLinkComponent.h"

UIRRSmartNavLinkComponent::UIRRSmartNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHoldUntilOpen = true;
    this->MaxOpenWait = 2.00f;
    this->bAutoCloseWhenClear = true;
    this->AutoCloseDelay = 1.00f;
    this->DoorwayClearDistance = 120.00f;
    this->DoorwayOccupiedRadius = 100.00f;
    this->MaxCrossingTime = 10.00f;
    this->DoorSwing = NULL;
}

void UIRRSmartNavLinkComponent::ToggleSmartLink(bool bEnabled) {
}

void UIRRSmartNavLinkComponent::ReleaseWaitingAgents() {
}

int32 UIRRSmartNavLinkComponent::GetMovingAgentCount() const {
    return 0;
}


