#pragma once
#include "CoreMinimal.h"
#include "MovieSceneRootEvaluationTemplateInstance.generated.h"

class UMovieSceneEntitySystemLinker;

USTRUCT(BlueprintType)
struct FMovieSceneRootEvaluationTemplateInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* EntitySystemLinker;
    
public:
    MOVIESCENE_API FMovieSceneRootEvaluationTemplateInstance();
};

