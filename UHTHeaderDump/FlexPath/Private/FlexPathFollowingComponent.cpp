#include "FlexPathFollowingComponent.h"

UFlexPathFollowingComponent::UFlexPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCustomPathSettings = false;
    this->CachedAIController = NULL;
    this->CachedControllerPawn = NULL;
    this->CachedNavMovementComponent = NULL;
}

void UFlexPathFollowingComponent::SetFlexPathSettings(const FPathSmoothingSettings& InSmoothing, const FPathFollowingSettings& InFollowing) {
}

void UFlexPathFollowingComponent::SetFlexPathEnabled(bool bEnable) {
}

bool UFlexPathFollowingComponent::IsUsingCustomPathSettings() const {
    return false;
}

bool UFlexPathFollowingComponent::IsFlexPathEnabled() const {
    return false;
}


