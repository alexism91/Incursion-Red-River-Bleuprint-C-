#include "LineSetComponent.h"

ULineSetComponent::ULineSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->LineMaterial = NULL;
    this->bBoundsDirty = true;
}

void ULineSetComponent::SetLineMaterial(UMaterialInterface* InLineMaterial) {
}

void ULineSetComponent::Clear() {
}

int32 ULineSetComponent::AddLines(const TArray<FVector>& InStart, const TArray<FVector>& InEnd, const FColor& InColor, const float InThickness, const float InDepthBias) {
    return 0;
}


