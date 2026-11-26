#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeWarpFrameRate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpFrameRate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FrameRateNumerator[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FrameRateDenominator[3];
    
public:
    MOVIESCENE_API FMovieSceneTimeWarpFrameRate();
};

