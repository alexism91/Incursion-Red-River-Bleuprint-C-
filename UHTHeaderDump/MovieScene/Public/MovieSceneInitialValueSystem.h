#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneInitialValueSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneInitialValueSystem();

};

