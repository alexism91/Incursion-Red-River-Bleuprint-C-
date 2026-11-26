#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphOutputTypePlayback.h"
#include "MovieGraphPostRenderImageSequencePlayOptions.h"
#include "MovieGraphPostRenderVideoPlayOptions.h"
#include "MovieGraphPostRenderSettings.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphPostRenderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OutputTypePriorityOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphOutputTypePlayback OutputTypePlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPostRenderImageSequencePlayOptions PostRenderImageSequencePlayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPostRenderVideoPlayOptions PostRenderAppleProResPlayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPostRenderVideoPlayOptions PostRenderAvidDNxHRPlayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPostRenderVideoPlayOptions PostRenderMP4PlayOptions;
    
    FMovieGraphPostRenderSettings();
};

