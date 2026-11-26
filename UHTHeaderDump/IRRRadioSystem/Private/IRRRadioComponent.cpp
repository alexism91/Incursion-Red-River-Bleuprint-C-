#include "IRRRadioComponent.h"

UIRRRadioComponent::UIRRRadioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocalRadioGateTime = 5.00f;
    this->TimeToWaitForResponse = 1.00f;
    this->RadioCullDistance = 3000.00f;
    this->bCullToCamera = true;
    this->bLocalRadioGateOpen = true;
    this->RadioDataAsset = NULL;
    this->RadioManager = NULL;
}

void UIRRRadioComponent::TriggerRadioMessage(FGameplayTag NewRadioMessageTag, float ChanceToPlay, bool bForceToPlay, bool bIgnoreGate, float Delay, int32 Priority) {
}

void UIRRRadioComponent::TriggerDelayedRadioMessage() {
}

void UIRRRadioComponent::PlayRadioMessage(FIRRRadioMessage RadioMessage, bool bOwner) {
}

void UIRRRadioComponent::OnReceiverEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UIRRRadioComponent::OnOwnerDeath(const FGameplayTag& DeathVoiceTag) {
}

void UIRRRadioComponent::OnCooldownTimer() {
}

void UIRRRadioComponent::OnBroadcasterEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}


