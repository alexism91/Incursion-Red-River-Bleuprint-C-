#include "IRRMissionBriefingTriggerComponent.h"

UIRRMissionBriefingTriggerComponent::UIRRMissionBriefingTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->Agent = NULL;
    this->PlayLimit = EIRRBriefingPlayLimit::OncePerPlaythrough;
    this->AbilityClassOverride = NULL;
    this->bOverrideWait = true;
    this->bHasPlayed = false;
}

bool UIRRMissionBriefingTriggerComponent::TryTriggerBriefing(APawn* Pawn) {
    return false;
}

void UIRRMissionBriefingTriggerComponent::SetTriggerEnabled(bool bNewEnabled) {
}

void UIRRMissionBriefingTriggerComponent::ResetTrigger(bool bResetFirstTime) {
}

void UIRRMissionBriefingTriggerComponent::OnPawnEnteredZone(AIRRLevelTrigger* LevelZone, APawn* Pawn) {
}

void UIRRMissionBriefingTriggerComponent::OnOwnerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UIRRMissionBriefingTriggerComponent::OnMissionBriefingInterrupted(FIRRMissionBriefing InterruptedBriefing) {
}

bool UIRRMissionBriefingTriggerComponent::IsTriggerEnabled() const {
    return false;
}

bool UIRRMissionBriefingTriggerComponent::HasPlayed() const {
    return false;
}

FName UIRRMissionBriefingTriggerComponent::GetPlaythroughKey() const {
    return NAME_None;
}

bool UIRRMissionBriefingTriggerComponent::CanTrigger() const {
    return false;
}


