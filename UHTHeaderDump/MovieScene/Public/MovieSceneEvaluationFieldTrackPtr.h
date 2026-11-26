#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationFieldTrackPtr.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldTrackPtr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID SequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackIdentifier TrackIdentifier;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldTrackPtr();
};

