#include "IRRGrenadePredictionComponent.h"

UIRRGrenadePredictionComponent::UIRRGrenadePredictionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateInterval = 0.15f;
    this->RestSpeedThreshold = 25.00f;
    this->BroadcastDistanceThreshold = 75.00f;
    this->MinTimeBetweenUpdates = 0.05f;
}

bool UIRRGrenadePredictionComponent::IsAtRest() const {
    return false;
}

bool UIRRGrenadePredictionComponent::HasPrediction() const {
    return false;
}

float UIRRGrenadePredictionComponent::GetTimeUntilExplosion() const {
    return 0.0f;
}

FIRRGrenadePredictionResult UIRRGrenadePredictionComponent::GetPredictionResult() const {
    return FIRRGrenadePredictionResult{};
}

FVector UIRRGrenadePredictionComponent::GetPredictedDangerLocation() const {
    return FVector{};
}


