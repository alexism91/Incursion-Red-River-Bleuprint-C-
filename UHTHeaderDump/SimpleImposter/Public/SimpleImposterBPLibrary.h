#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Contour.h"
#include "SimpleImposterBPLibrary.generated.h"

class UDynamicMesh;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class USimpleImposterBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USimpleImposterBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateRTResource(UTextureRenderTarget2D* RenderTarget, bool bClearRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, const TArray<FVector2D>& UV);
    
    UFUNCTION(BlueprintCallable)
    static bool FindContour(const UTextureRenderTarget2D* RenderTarget, TArray<FContour>& ContourPoints, const float Epsilon);
    
};

