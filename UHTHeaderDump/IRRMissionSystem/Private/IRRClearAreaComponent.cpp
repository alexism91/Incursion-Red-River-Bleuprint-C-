#include "IRRClearAreaComponent.h"

UIRRClearAreaComponent::UIRRClearAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyCountAIInsideArea = false;
    this->bAreaCleared = false;
    this->Trigger = NULL;
}

void UIRRClearAreaComponent::OnPawnLeftZone(AIRRLevelTrigger* LevelZone, APawn* Pawn) {
}

void UIRRClearAreaComponent::OnPawnEnteredZone(AIRRLevelTrigger* LevelZone, APawn* Pawn) {
}

void UIRRClearAreaComponent::OnCharacterUnRegistered(AIRRBaseCharacter* Character) {
}

void UIRRClearAreaComponent::OnCharacterDeath(AIRRBaseCharacter* Character) {
}

bool UIRRClearAreaComponent::IsAreaCleared() const {
    return false;
}

TArray<APawn*> UIRRClearAreaComponent::GetTrackedAI() const {
    return TArray<APawn*>();
}

int32 UIRRClearAreaComponent::GetRemainingAICount() const {
    return 0;
}


