#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimeWarpLoop.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpLoop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Duration;
    
    MOVIESCENE_API FMovieSceneTimeWarpLoop();
};

