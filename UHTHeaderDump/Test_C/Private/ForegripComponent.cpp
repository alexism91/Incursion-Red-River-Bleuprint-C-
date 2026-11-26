#include "ForegripComponent.h"

UForegripComponent::UForegripComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForegripDataAsset = NULL;
}

FVector UForegripComponent::GetGripLocation_Implementation() const {
    return FVector{};
}


