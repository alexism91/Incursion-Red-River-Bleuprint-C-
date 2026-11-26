#include "OpenCVBlueprintFunctionLibrary.h"

UOpenCVBlueprintFunctionLibrary::UOpenCVBlueprintFunctionLibrary() {
}

int32 UOpenCVBlueprintFunctionLibrary::OpenCVChessboardDetectCorners(const UTextureRenderTarget2D* InRenderTarget, const FIntPoint InPatternSize, const bool bDebugDrawCorners, UTexture2D*& OutDebugTexture, TArray<FVector2D>& OutDetectedCorners) {
    return 0;
}

int32 UOpenCVBlueprintFunctionLibrary::OpenCVArucoDetectMarkers(const UTextureRenderTarget2D* InRenderTarget, const EOpenCVArucoDictionary InDictionary, const EOpenCVArucoDictionarySize InDictionarySize, const bool bDebugDrawMarkers, const bool bEstimatePose, const float InMarkerLengthInMeters, const FOpenCVLensDistortionParametersBase& InLensDistortionParameters, UTexture2D*& OutDebugTexture, TArray<FOpenCVArucoDetectedMarker>& OutDetectedMarkers) {
    return 0;
}


