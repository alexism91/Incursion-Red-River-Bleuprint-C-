#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "HTNTask_ReleaseStandingOrder.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_ReleaseStandingOrder : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnlyOrder;
    
    UHTNTask_ReleaseStandingOrder();

};

