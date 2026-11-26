#include "PointSetComponent.h"

UPointSetComponent::UPointSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->PointMaterial = NULL;
    this->bBoundsDirty = true;
}

void UPointSetComponent::SetPointMaterial(UMaterialInterface* InPointMaterial) {
}

void UPointSetComponent::Clear() {
}

int32 UPointSetComponent::AddPoints(const TArray<FVector>& Positions, const FColor& InColor, const float InSize, const float InDepthBias) {
    return 0;
}


