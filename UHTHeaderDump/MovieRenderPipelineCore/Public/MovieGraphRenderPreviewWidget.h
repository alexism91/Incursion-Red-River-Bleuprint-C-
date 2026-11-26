#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MovieGraphRenderPreviewWidget.generated.h"

class UMovieGraphPipeline;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MOVIERENDERPIPELINECORE_API UMovieGraphRenderPreviewWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMovieGraphRenderPreviewWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedForPipeline(UMovieGraphPipeline* InPipeline);
    
};

