#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCustomTimeWarpGetterStruct.generated.h"

class UMovieSceneTimeWarpGetter;

USTRUCT(BlueprintType)
struct FMovieSceneCustomTimeWarpGetterStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneTimeWarpGetter* Object;
    
    MOVIESCENE_API FMovieSceneCustomTimeWarpGetterStruct();
};

