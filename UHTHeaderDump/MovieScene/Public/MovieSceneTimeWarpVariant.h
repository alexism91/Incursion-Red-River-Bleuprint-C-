#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNumericVariant.h"
#include "MovieSceneTimeWarpVariant.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpVariant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneNumericVariant Variant;
    
public:
    MOVIESCENE_API FMovieSceneTimeWarpVariant();
};

