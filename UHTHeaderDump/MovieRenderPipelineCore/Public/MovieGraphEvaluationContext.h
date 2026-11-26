#pragma once
#include "CoreMinimal.h"
#include "MovieGraphEvaluationContext_VisitedNodeInfo.h"
#include "MovieGraphTraversalContext.h"
#include "MovieGraphEvaluationContext.generated.h"

class UMovieGraphConfig;
class UMovieGraphPin;
class UMovieGraphSubgraphNode;

USTRUCT(BlueprintType)
struct FMovieGraphEvaluationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphTraversalContext UserContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMovieGraphConfig*, FMovieGraphEvaluationContext_VisitedNodeInfo> VisitedNodesByOwningGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphPin* PinBeingFollowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphSubgraphNode*> SubgraphStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircularGraphReferenceFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TraversalError;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphEvaluationContext();
};

