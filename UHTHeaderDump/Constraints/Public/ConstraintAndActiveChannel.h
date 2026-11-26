#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConstraintChannel.h"
#include "ConstraintAndActiveChannel.generated.h"

class UTickableConstraint;

USTRUCT(BlueprintType)
struct FConstraintAndActiveChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneConstraintChannel ActiveChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTickableConstraint* ConstraintCopyToSpawn;
    
public:
    CONSTRAINTS_API FConstraintAndActiveChannel();
};

