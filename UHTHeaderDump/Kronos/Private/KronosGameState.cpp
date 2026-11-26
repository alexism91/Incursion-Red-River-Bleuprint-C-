#include "KronosGameState.h"

AKronosGameState::AKronosGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateType = EKronosGameStateType::NONE;
}

EKronosGameStateType AKronosGameState::GetGameStateType() const {
    return EKronosGameStateType::NONE;
}


