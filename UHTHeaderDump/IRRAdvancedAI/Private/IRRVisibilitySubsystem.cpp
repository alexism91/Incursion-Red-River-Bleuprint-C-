#include "IRRVisibilitySubsystem.h"

UIRRVisibilitySubsystem::UIRRVisibilitySubsystem() {
    this->VisibilityData = NULL;
    this->Atlas = NULL;
}

void UIRRVisibilitySubsystem::UpdateStreaming(const TArray<FVector>& FocusWorldPoints, float LoadRadius) {
}

bool UIRRVisibilitySubsystem::MightBeVisible(FVector ThreatPos, EIRRStance ThreatStance, FVector CandidatePos) const {
    return false;
}

void UIRRVisibilitySubsystem::LoadVisibilityData(UIRRVisibilityData* Data) {
}

void UIRRVisibilitySubsystem::LoadVisibilityAtlas(UIRRVisibilityAtlas* NewAtlas) {
}

bool UIRRVisibilitySubsystem::IsProbablyCover(FVector ThreatPos, EIRRStance ThreatStance, FVector CandidatePos) const {
    return false;
}

bool UIRRVisibilitySubsystem::HasData() const {
    return false;
}

float UIRRVisibilitySubsystem::GetDepthTowardTarget(FVector SamplePos, EIRRStance Stance, FVector TargetPos) const {
    return 0.0f;
}


