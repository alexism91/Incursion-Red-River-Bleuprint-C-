#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDoubleChannel.h"
#include "MovieSceneTimeWarpChannel.generated.h"

class UMovieScene;

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpChannel : public FMovieSceneDoubleChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieScene* Owner;
    
    MOVIESCENE_API FMovieSceneTimeWarpChannel();
};

