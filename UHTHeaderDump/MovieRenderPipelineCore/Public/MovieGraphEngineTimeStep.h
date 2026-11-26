#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineCustomTimeStep -FallbackName=EngineCustomTimeStep
#include "MovieGraphEngineTimeStep.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphEngineTimeStep : public UEngineCustomTimeStep {
    GENERATED_BODY()
public:
    UMovieGraphEngineTimeStep();

};

