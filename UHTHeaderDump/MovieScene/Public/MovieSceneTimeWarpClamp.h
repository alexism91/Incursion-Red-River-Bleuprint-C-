#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimeWarpClamp.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpClamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Max;
    
    MOVIESCENE_API FMovieSceneTimeWarpClamp();
};

