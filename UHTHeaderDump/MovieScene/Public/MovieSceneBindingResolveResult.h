#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingResolveResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneBindingResolveResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    MOVIESCENE_API FMovieSceneBindingResolveResult();
};

