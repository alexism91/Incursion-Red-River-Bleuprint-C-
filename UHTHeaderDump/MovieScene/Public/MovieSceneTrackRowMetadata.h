#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConditionContainer.h"
#include "MovieSceneTrackRowMetadata.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackRowMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneConditionContainer ConditionContainer;
    
    MOVIESCENE_API FMovieSceneTrackRowMetadata();
};

