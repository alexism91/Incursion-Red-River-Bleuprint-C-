#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphSequenceRangeType.h"
#include "MovieGraphSequencePlaybackRangeBound.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphSequencePlaybackRangeBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphSequenceRangeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphSequencePlaybackRangeBound();
};

