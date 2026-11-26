#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTransformBreadcrumbs.h"
#include "MovieSceneWarpCounter.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneWarpCounter : public FMovieSceneTransformBreadcrumbs {
    GENERATED_BODY()
public:
    MOVIESCENE_API FMovieSceneWarpCounter();
};

