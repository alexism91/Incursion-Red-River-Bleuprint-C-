#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingReference.h"
#include "MovieSceneBindingReferences.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneBindingReferences {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneBindingReference> SortedReferences;
    
public:
    MOVIESCENE_API FMovieSceneBindingReferences();
};

