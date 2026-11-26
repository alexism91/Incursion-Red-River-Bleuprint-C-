#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneTimeWarpVariant.h"
#include "MovieSceneTimeWarpSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTimeWarpSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeWarpVariant TimeWarp;
    
    UMovieSceneTimeWarpSection();

};

