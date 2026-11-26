#pragma once
#include "CoreMinimal.h"
#include "MovieSceneInverseNestedSequenceTransform.h"
#include "MovieSceneTimeTransform.h"
#include "MovieSceneInverseSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneInverseSequenceTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeTransform LinearTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneInverseNestedSequenceTransform> NestedTransforms;
    
public:
    MOVIESCENE_API FMovieSceneInverseSequenceTransform();
};

