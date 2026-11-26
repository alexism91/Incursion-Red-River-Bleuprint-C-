#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphImagePreviewData.h"
#include "MovieGraphRendererBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRendererBase : public UObject {
    GENERATED_BODY()
public:
    UMovieGraphRendererBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieGraphImagePreviewData> GetPreviewData() const;
    
};

