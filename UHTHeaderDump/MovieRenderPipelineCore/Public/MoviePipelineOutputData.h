#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderOutputData.h"
#include "MoviePipelineShotOutputData.h"
#include "MoviePipelineOutputData.generated.h"

class UMoviePipelineBase;
class UMoviePipelineExecutorJob;

USTRUCT(BlueprintType)
struct FMoviePipelineOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineBase* pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviePipelineShotOutputData> ShotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieGraphRenderOutputData> GraphData;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineOutputData();
};

