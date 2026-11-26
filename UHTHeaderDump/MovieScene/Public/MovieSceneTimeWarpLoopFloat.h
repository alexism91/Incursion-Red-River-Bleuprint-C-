#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeWarpLoopFloat.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpLoopFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    MOVIESCENE_API FMovieSceneTimeWarpLoopFloat();
};

