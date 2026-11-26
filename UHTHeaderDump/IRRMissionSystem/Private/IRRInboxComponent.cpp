#include "IRRInboxComponent.h"

UIRRInboxComponent::UIRRInboxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionComponent = NULL;
}

void UIRRInboxComponent::UpdateSelectedMessage(FIRRInboxItem Message) {
}

void UIRRInboxComponent::UpdateSearchTerm(const FString& NewSearchTerm) {
}

void UIRRInboxComponent::UpdateInbox() {
}

void UIRRInboxComponent::TryDeleteMessage(FGuid UID) {
}

void UIRRInboxComponent::TryAddMessage(FIRRInboxItem Message) {
}

void UIRRInboxComponent::ReceiveReward(FGuid UID) {
}

void UIRRInboxComponent::OnProgressDataUpdated(FIRRProgressData OutData) {
}

void UIRRInboxComponent::OnNewsDataReady(bool bSuccess) {
}

bool UIRRInboxComponent::HasUnreadMessages() const {
    return false;
}

bool UIRRInboxComponent::HasClaimableReward(FGuid UID) const {
    return false;
}

bool UIRRInboxComponent::CanReceiveReward(FGuid UID, FString& FailureMessage) const {
    return false;
}


