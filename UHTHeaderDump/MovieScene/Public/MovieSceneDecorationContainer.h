#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDecorationContainer.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneDecorationContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Decorations;
    
public:
    MOVIESCENE_API FMovieSceneDecorationContainer();
};

