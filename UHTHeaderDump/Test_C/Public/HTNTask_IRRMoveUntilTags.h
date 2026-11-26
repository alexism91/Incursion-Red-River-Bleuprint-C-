#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "HTNTask_IRRCoverMoveTo.h"
#include "HTNTask_IRRMoveUntilTags.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_IRRMoveUntilTags : public UHTNTask_IRRCoverMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StopTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAllTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckActiveTargetTags;
    
    UHTNTask_IRRMoveUntilTags();

};

