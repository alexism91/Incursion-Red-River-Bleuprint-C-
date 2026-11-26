#pragma once
#include "CoreMinimal.h"
#include "MovieGraphActorQueryEntry.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphActorQueryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UActorComponent>> ComponentsToMatch;
    
    FMovieGraphActorQueryEntry();
};

