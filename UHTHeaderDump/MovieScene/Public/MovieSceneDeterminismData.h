#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDeterminismFence.h"
#include "MovieSceneDeterminismData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDeterminismData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneDeterminismFence> Fences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParentSequenceRequiresLowerFence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParentSequenceRequiresUpperFence;
    
    MOVIESCENE_API FMovieSceneDeterminismData();
};

