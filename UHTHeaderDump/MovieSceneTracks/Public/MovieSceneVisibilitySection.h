#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolSection -FallbackName=MovieSceneBoolSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneVisibilitySection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneVisibilitySection : public UMovieSceneBoolSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UMovieSceneVisibilitySection();


    // Fix for true pure virtual functions not being implemented
};

