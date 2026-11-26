#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MovieGraphBurnInWidget.generated.h"

class UMovieGraphEvaluatedConfig;
class UMovieGraphPipeline;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MOVIERENDERPIPELINECORE_API UMovieGraphBurnInWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMovieGraphBurnInWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateForGraph(UMovieGraphPipeline* InGraphPipeline, UMovieGraphEvaluatedConfig* InEvaluatedConfig, int32 InCameraIndex, const FString& CameraName);
    
};

