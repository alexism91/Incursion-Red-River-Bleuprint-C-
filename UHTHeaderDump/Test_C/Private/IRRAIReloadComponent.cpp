#include "IRRAIReloadComponent.h"

UIRRAIReloadComponent::UIRRAIReloadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinRoundsLoadedToCancel = 2;
    this->bForceAimStanceWhileReloading = true;
}

bool UIRRAIReloadComponent::WantsToReload() const {
    return false;
}

bool UIRRAIReloadComponent::TryReload() {
    return false;
}

void UIRRAIReloadComponent::OnAbilityStarted(FGameplayTag AbilityTag) {
}

void UIRRAIReloadComponent::OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess) {
}

bool UIRRAIReloadComponent::IsReloading() const {
    return false;
}

bool UIRRAIReloadComponent::CanReload() const {
    return false;
}

bool UIRRAIReloadComponent::CancelReload() {
    return false;
}


