#pragma once
#include "CoreMinimal.h"
#include "MovieGraphActorQueryEntry.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_Actor.generated.h"

class AActor;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_Actor : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActorsToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieGraphActorQueryEntry> ActorsAndComponentsToMatch;
    
    UMovieGraphConditionGroupQuery_Actor();

};

