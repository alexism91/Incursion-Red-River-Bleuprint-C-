#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderDataIdentifier.h"
#include "MovieGraphRenderLayerOutputData.h"
#include "MovieGraphRenderOutputData.generated.h"

class UMoviePipelineExecutorShot;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphRenderOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMoviePipelineExecutorShot> Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieGraphRenderDataIdentifier, FMovieGraphRenderLayerOutputData> RenderLayerData;
    
    FMovieGraphRenderOutputData();
};

