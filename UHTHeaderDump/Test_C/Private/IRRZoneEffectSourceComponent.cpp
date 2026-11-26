#include "IRRZoneEffectSourceComponent.h"

UIRRZoneEffectSourceComponent::UIRRZoneEffectSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectPlayers = true;
    this->bAffectAI = false;
    this->bInterruptAbilitiesOnLeave = false;
}

bool UIRRZoneEffectSourceComponent::ShouldAffectPawn(const APawn* Pawn) const {
    return false;
}

bool UIRRZoneEffectSourceComponent::OnPawnLeftZone(APawn* Pawn) {
    return false;
}

bool UIRRZoneEffectSourceComponent::OnPawnEnteredZone(APawn* Pawn) {
    return false;
}


