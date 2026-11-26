#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneVisibilityTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneVisibilityTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneVisibilityTrack();

};

