#include "IRRAIBossComponent.h"

UIRRAIBossComponent::UIRRAIBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGlobalTargetListener = false;
}

void UIRRAIBossComponent::OnTargetSenseEventAdded(const FIRRAISenseEvent& NewEvent) {
}

void UIRRAIBossComponent::OnBotRemoved(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character) {
}

void UIRRAIBossComponent::OnBotAdded(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character) {
}


