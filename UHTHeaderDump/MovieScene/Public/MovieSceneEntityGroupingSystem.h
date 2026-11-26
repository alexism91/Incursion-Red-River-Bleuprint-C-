#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEntityGroupingSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEntityGroupingSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneEntityGroupingSystem();

};

