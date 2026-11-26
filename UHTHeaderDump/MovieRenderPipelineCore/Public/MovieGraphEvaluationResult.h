#pragma once
#include "CoreMinimal.h"
#include "MovieGraphEvaluationResult.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphEvaluationResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> MatchingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UActorComponent*> MatchingComponents;
    
    FMovieGraphEvaluationResult();
};

