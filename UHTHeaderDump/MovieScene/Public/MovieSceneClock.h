#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneClock.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneClock : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UMovieSceneClock();

};

