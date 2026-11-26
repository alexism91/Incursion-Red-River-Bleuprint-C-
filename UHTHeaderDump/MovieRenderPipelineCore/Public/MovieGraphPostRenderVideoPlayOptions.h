#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "EMovieGraphJobPlaybackRange.h"
#include "EMovieGraphPlaybackMethod.h"
#include "EMovieGraphRenderLayerPlaybackRange.h"
#include "MovieGraphPostRenderVideoPlayOptions.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphPostRenderVideoPlayOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphPlaybackMethod PlaybackMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath PlayerExecutable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphJobPlaybackRange JobPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphRenderLayerPlaybackRange RenderLayerPlayback;
    
    FMovieGraphPostRenderVideoPlayOptions();
};

