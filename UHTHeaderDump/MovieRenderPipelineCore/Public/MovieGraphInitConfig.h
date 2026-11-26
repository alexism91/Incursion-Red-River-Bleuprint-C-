#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphInitConfig.generated.h"

class UMovieGraphAudioRendererBase;
class UMovieGraphDataSourceBase;
class UMovieGraphRendererBase;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphInitConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieGraphRendererBase> RendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieGraphDataSourceBase> DataSourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieGraphAudioRendererBase> AudioRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderViewport;
    
    FMovieGraphInitConfig();
};

