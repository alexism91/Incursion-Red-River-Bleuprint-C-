#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConditionContainer.generated.h"

class UMovieSceneCondition;

USTRUCT(BlueprintType)
struct FMovieSceneConditionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCondition* Condition;
    
    MOVIESCENE_API FMovieSceneConditionContainer();
};

