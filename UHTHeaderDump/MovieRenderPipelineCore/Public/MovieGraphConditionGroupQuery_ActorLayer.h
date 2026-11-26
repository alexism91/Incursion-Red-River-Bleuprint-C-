#pragma once
#include "CoreMinimal.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_ActorLayer.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorLayer : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LayerNames;
    
    UMovieGraphConditionGroupQuery_ActorLayer();

};

