#pragma once
#include "CoreMinimal.h"
#include "MovieGraphBranch.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BranchName;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphBranch();
};

