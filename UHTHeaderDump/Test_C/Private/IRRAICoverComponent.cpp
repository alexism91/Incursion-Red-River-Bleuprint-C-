#include "IRRAICoverComponent.h"

UIRRAICoverComponent::UIRRAICoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotInCoverCount = 0;
    this->CoverState = EIRRAICoverState::None;
    this->FactionCover = NULL;
}

bool UIRRAICoverComponent::WasRecentlyHoldingCover(float WithinSeconds) const {
    return false;
}

void UIRRAICoverComponent::OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak) {
}

void UIRRAICoverComponent::HandlePeaceStateChanged(const bool IsAtPeace) {
}

FIRRAICoverData UIRRAICoverComponent::GetCoverInUse() const {
    return FIRRAICoverData{};
}


