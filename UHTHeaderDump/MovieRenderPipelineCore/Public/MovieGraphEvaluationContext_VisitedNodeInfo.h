#pragma once
#include "CoreMinimal.h"
#include "MovieGraphEvaluationContext_VisitedNodeInfo.generated.h"

class UMovieGraphNode;

USTRUCT(BlueprintType)
struct FMovieGraphEvaluationContext_VisitedNodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UMovieGraphNode*> VisitedNodes;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphEvaluationContext_VisitedNodeInfo();
};

