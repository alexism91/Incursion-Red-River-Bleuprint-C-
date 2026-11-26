#include "IRRRadioManager.h"

UIRRRadioManager::UIRRRadioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BroadcastRadius = 2000.00f;
    this->GlobalRadioGateTime = 1.00f;
    this->bGlobalRadioGateOpen = true;
}

void UIRRRadioManager::UnregisterRadioComponent(UIRRRadioComponent* Radio) {
}

void UIRRRadioManager::RegisterRadioComponent(UIRRRadioComponent* Radio) {
}

void UIRRRadioManager::OnCooldownTimer() {
}

bool UIRRRadioManager::IsGlobalRadioGateOpen() {
    return false;
}

TArray<UIRRRadioComponent*> UIRRRadioManager::GetRadioComponents() {
    return TArray<UIRRRadioComponent*>();
}

void UIRRRadioManager::BroadcastRadioMessage_MC_Implementation(FIRRRadioMessage Message, UIRRRadioComponent* Broadcaster) {
}

void UIRRRadioManager::BroadcastRadioMessage(FIRRRadioMessage Message, UIRRRadioComponent* Broadcaster) {
}


