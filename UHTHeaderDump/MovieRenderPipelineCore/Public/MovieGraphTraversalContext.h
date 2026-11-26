#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderDataIdentifier.h"
#include "MovieGraphTimeStepData.h"
#include "MovieGraphTraversalContext.generated.h"

class UMovieGraphConfig;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;

USTRUCT(BlueprintType)
struct FMovieGraphTraversalContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorShot* Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphConfig* RootGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphRenderDataIdentifier RenderDataIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphTimeStepData Time;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphTraversalContext();
};

