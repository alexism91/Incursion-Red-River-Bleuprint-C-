#include "Landscape.h"

ALandscape::ALandscape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ALandscape::RenderWeightmaps(FTransform InWorldTransform, FBox2D InExtents, const TArray<FName>& InWeightmapLayerNames, UTextureRenderTarget* OutRenderTarget) {
    return false;
}

bool ALandscape::RenderWeightmap(FTransform InWorldTransform, FBox2D InExtents, FName InWeightmapLayerName, UTextureRenderTarget2D* OutRenderTarget) {
    return false;
}

bool ALandscape::RenderHeightmap(FTransform InWorldTransform, FBox2D InExtents, UTextureRenderTarget2D* OutRenderTarget) {
    return false;
}

TArray<FName> ALandscape::GetTargetLayerNames(bool bInIncludeVisibilityLayer) const {
    return TArray<FName>();
}


