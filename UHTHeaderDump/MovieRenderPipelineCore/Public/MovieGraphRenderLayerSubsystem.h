#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "MovieGraphRenderLayerSubsystem.generated.h"

class UMovieGraphRenderLayer;
class UMovieGraphRenderLayerSubsystem;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRenderLayerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphRenderLayer*> RenderLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphRenderLayer* ActiveRenderLayer;
    
public:
    UMovieGraphRenderLayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetActiveRenderLayerByObj(UMovieGraphRenderLayer* RenderLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveRenderLayerByName(const FName& RenderLayerName);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRenderLayer(const FString& RenderLayerName);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMovieGraphRenderLayer*> GetRenderLayers();
    
    UFUNCTION(BlueprintCallable)
    static UMovieGraphRenderLayerSubsystem* GetFromWorld(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphRenderLayer* GetActiveRenderLayer() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveRenderLayer();
    
    UFUNCTION(BlueprintCallable)
    bool AddRenderLayer(UMovieGraphRenderLayer* RenderLayer);
    
};

