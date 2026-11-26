#include "SimpleImposterBPLibrary.h"

USimpleImposterBPLibrary::USimpleImposterBPLibrary() {
}

void USimpleImposterBPLibrary::UpdateRTResource(UTextureRenderTarget2D* RenderTarget, bool bClearRenderTarget) {
}

UDynamicMesh* USimpleImposterBPLibrary::SetMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, const TArray<FVector2D>& UV) {
    return NULL;
}

bool USimpleImposterBPLibrary::FindContour(const UTextureRenderTarget2D* RenderTarget, TArray<FContour>& ContourPoints, const float Epsilon) {
    return false;
}


