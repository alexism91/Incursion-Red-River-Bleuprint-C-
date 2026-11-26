#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneControlRigParameterEvaluatorSystem.generated.h"

class UMovieScenePiecewiseDoubleBlenderSystem;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneControlRigParameterEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;
    
    UMovieSceneControlRigParameterEvaluatorSystem();

};

