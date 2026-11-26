#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeWarpClampFloat.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpClampFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    MOVIESCENE_API FMovieSceneTimeWarpClampFloat();
};

