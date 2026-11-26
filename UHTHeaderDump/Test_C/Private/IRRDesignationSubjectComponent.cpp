#include "IRRDesignationSubjectComponent.h"

UIRRDesignationSubjectComponent::UIRRDesignationSubjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTrackForStrike = true;
}

AActor* UIRRDesignationSubjectComponent::GetStrikeTargetActor_Implementation() const {
    return NULL;
}

float UIRRDesignationSubjectComponent::GetDistanceToNearestImpact(FVector From) const {
    return 0.0f;
}

FVector UIRRDesignationSubjectComponent::GetDesignationAimPoint_Implementation() const {
    return FVector{};
}

UIRRDesignationSubjectComponent* UIRRDesignationSubjectComponent::FindForSubjectOf(AActor* LasedActor) {
    return NULL;
}

bool UIRRDesignationSubjectComponent::CanBeDesignated_Implementation() const {
    return false;
}


