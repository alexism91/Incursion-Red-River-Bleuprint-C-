#pragma once
#include "CoreMinimal.h"
#include "MovieGraphCoreTimeStep.h"
#include "MovieGraphLinearTimeStep.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphLinearTimeStep : public UMovieGraphCoreTimeStep {
    GENERATED_BODY()
public:
    UMovieGraphLinearTimeStep();

};

