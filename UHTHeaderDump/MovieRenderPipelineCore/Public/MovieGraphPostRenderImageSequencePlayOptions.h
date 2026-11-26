#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphFrameRangeNotation.h"
#include "EMovieGraphImageSequencePlaybackRange.h"
#include "MovieGraphPostRenderVideoPlayOptions.h"
#include "MovieGraphPostRenderImageSequencePlayOptions.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphPostRenderImageSequencePlayOptions : public FMovieGraphPostRenderVideoPlayOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphFrameRangeNotation FrameRangeNotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphImageSequencePlaybackRange PlaybackRange;
    
    FMovieGraphPostRenderImageSequencePlayOptions();
};

