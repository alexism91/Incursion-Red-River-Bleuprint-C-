#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityDecorator -FallbackName=MovieSceneEntityDecorator
#include "MovieSceneCameraParameterDecoration.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCameraParameterDecoration : public UObject, public IMovieSceneEntityDecorator {
    GENERATED_BODY()
public:
    UMovieSceneCameraParameterDecoration();


    // Fix for true pure virtual functions not being implemented
};

