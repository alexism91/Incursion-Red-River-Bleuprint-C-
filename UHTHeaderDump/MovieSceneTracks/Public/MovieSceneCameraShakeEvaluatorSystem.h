#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneCameraShakeEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class UMovieSceneCameraShakeEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneCameraShakeEvaluatorSystem();

};

