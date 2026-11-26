#pragma once
#include "CoreMinimal.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_Sublevel.generated.h"

class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_Sublevel : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubLevels;
    
    UMovieGraphConditionGroupQuery_Sublevel();

};

