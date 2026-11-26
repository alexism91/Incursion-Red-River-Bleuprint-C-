#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneBindingResolveContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneBindingResolveContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBindingProxy Binding;
    
    MOVIESCENE_API FMovieSceneBindingResolveContext();
};

