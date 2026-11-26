#include "AttributeBasedRootMotionComponent.h"

UAttributeBasedRootMotionComponent::UAttributeBasedRootMotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableRootMotion = true;
    this->Mode = EAttributeBasedRootMotionMode::ApplyDelta;
}


