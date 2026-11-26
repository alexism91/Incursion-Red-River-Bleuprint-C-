#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LandscapeProxy.h"
#include "Landscape.generated.h"

class UTextureRenderTarget;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ALandscape : public ALandscapeProxy {
    GENERATED_BODY()
public:
    ALandscape(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RenderWeightmaps(FTransform InWorldTransform, FBox2D InExtents, const TArray<FName>& InWeightmapLayerNames, UTextureRenderTarget* OutRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RenderWeightmap(FTransform InWorldTransform, FBox2D InExtents, FName InWeightmapLayerName, UTextureRenderTarget2D* OutRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RenderHeightmap(FTransform InWorldTransform, FBox2D InExtents, UTextureRenderTarget2D* OutRenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FName> GetTargetLayerNames(bool bInIncludeVisibilityLayer) const;
    
};

