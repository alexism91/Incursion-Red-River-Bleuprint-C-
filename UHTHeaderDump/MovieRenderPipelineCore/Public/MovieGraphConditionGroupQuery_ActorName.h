#pragma once
#include "CoreMinimal.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_ActorName.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorName : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WildcardSearch;
    
    UMovieGraphConditionGroupQuery_ActorName();

};

