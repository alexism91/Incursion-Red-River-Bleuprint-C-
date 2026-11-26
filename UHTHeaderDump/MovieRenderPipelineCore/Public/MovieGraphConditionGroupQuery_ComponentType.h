#pragma once
#include "CoreMinimal.h"
#include "MovieGraphConditionGroupQueryBase.h"
#include "MovieGraphConditionGroupQuery_ComponentType.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ComponentType : public UMovieGraphConditionGroupQueryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ComponentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyMatchComponents;
    
    UMovieGraphConditionGroupQuery_ComponentType();

};

