#include "IRRPathFollowingComponent.h"

UIRRPathFollowingComponent::UIRRPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinPathDecelerationFactor = 0.25f;
    this->CoverExitMoveGrace = 0.25f;
}

void UIRRPathFollowingComponent::SetAvoidanceMode(EIRRAvoidanceMode NewMode) {
}

EIRRAvoidanceMode UIRRPathFollowingComponent::GetRequestedAvoidanceMode() const {
    return EIRRAvoidanceMode::None;
}

double UIRRPathFollowingComponent::GetMoveStartTime() const {
    return 0.0;
}

bool UIRRPathFollowingComponent::GetMoveStartedFromCover() const {
    return false;
}

bool UIRRPathFollowingComponent::GetIsMoving() const {
    return false;
}

bool UIRRPathFollowingComponent::GetIsDecelerating() const {
    return false;
}

FIRRAICurrentPathData UIRRPathFollowingComponent::GetCurrentPathData() const {
    return FIRRAICurrentPathData{};
}

EIRRAvoidanceMode UIRRPathFollowingComponent::GetAvoidanceMode() const {
    return EIRRAvoidanceMode::None;
}

float UIRRPathFollowingComponent::CalcRemainingPathLength() const {
    return 0.0f;
}


