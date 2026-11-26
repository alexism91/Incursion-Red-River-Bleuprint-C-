#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeWarpChannel.h"
#include "MovieSceneTimeWarpGetter.h"
#include "MovieSceneTimeWarpCurve.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTimeWarpCurve : public UMovieSceneTimeWarpGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeWarpChannel Channel;
    
    UMovieSceneTimeWarpCurve();

};

