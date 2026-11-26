#pragma once
#include "CoreMinimal.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_IsSpawnable.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_IsSpawnable : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawnable;
    
    UMovieGraphConditionGroupQuery_IsSpawnable();

};

