#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneConditionContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneConditionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBindingProxy Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> BoundObjects;
    
    MOVIESCENE_API FMovieSceneConditionContext();
};

