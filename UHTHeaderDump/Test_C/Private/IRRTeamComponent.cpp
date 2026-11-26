#include "IRRTeamComponent.h"

UIRRTeamComponent::UIRRTeamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRTeamComponent::ReEvaluatePawn(APawn* Pawn) {
}

void UIRRTeamComponent::RebuildCache() {
}

void UIRRTeamComponent::OnPossess(AIRRBaseCharacter* Character, AController* Controller) {
}

void UIRRTeamComponent::OnOwnerRevive(AActor* RevivedBy) {
}

void UIRRTeamComponent::OnOwnerDeath(FIRRDamageData DamageData) {
}

void UIRRTeamComponent::OnCharacterRemoved(AIRRBaseCharacter* Character) {
}

void UIRRTeamComponent::OnCharacterAdded(AIRRBaseCharacter* Character) {
}

TArray<APawn*> UIRRTeamComponent::GetNeutrals() const {
    return TArray<APawn*>();
}

TArray<APawn*> UIRRTeamComponent::GetHostiles() const {
    return TArray<APawn*>();
}

TArray<APawn*> UIRRTeamComponent::GetFriendlies() const {
    return TArray<APawn*>();
}


