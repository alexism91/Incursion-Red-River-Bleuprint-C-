#include "UsdDrawModeComponent.h"

UUsdDrawModeComponent::UUsdDrawModeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawMode = EUsdDrawMode::Bounds;
    this->CardGeometry = EUsdModelCardGeometry::Cross;
    this->CardTextureXPos = NULL;
    this->CardTextureYPos = NULL;
    this->CardTextureZPos = NULL;
    this->CardTextureXNeg = NULL;
    this->CardTextureYNeg = NULL;
    this->CardTextureZNeg = NULL;
    this->MaterialInstances.AddDefaulted(6);
    this->AuthoredFaces = 0;
}

void UUsdDrawModeComponent::SetTextureForFace(EUsdModelCardFace Face, UTexture2D* Texture) {
}

void UUsdDrawModeComponent::SetDrawMode(EUsdDrawMode NewDrawMode) {
}

void UUsdDrawModeComponent::SetCardTextureZPos(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardTextureZNeg(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardTextureYPos(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardTextureYNeg(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardTextureXPos(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardTextureXNeg(UTexture2D* NewTexture) {
}

void UUsdDrawModeComponent::SetCardGeometry(EUsdModelCardGeometry NewGeometry) {
}

void UUsdDrawModeComponent::SetBoundsMin(const FVector& NewMin) {
}

void UUsdDrawModeComponent::SetBoundsMax(const FVector& NewMax) {
}

void UUsdDrawModeComponent::SetBoundsColor(FLinearColor NewColor) {
}

UTexture2D* UUsdDrawModeComponent::GetTextureForFace(EUsdModelCardFace Face) const {
    return NULL;
}


