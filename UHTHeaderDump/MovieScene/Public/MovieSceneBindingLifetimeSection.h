#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneSection.h"
#include "MovieSceneBindingLifetimeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBindingLifetimeSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UMovieSceneBindingLifetimeSection();


    // Fix for true pure virtual functions not being implemented
};

