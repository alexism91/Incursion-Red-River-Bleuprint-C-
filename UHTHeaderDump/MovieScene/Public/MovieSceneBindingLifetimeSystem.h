#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneBindingLifetimeSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBindingLifetimeSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneBindingLifetimeSystem();

};

