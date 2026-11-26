#pragma once
#include "CoreMinimal.h"
#include "MovieGraphEvaluatedSettingsStack.generated.h"

class UMovieGraphNode;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphEvaluatedSettingsStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphNode*> NodeInstances;
    
    FMovieGraphEvaluatedSettingsStack();
};

