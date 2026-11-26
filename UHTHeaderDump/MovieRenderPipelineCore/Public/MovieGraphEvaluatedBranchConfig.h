#pragma once
#include "CoreMinimal.h"
#include "MovieGraphEvaluatedSettingsStack.h"
#include "MovieGraphEvaluatedBranchConfig.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphEvaluatedBranchConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FMovieGraphEvaluatedSettingsStack> NamedNodes;
    
public:
    FMovieGraphEvaluatedBranchConfig();
};

