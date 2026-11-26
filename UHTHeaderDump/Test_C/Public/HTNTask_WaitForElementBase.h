#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "HTNTask_WaitForElementBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TEST_C_API UHTNTask_WaitForElementBase : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedOnTimeout;
    
    UHTNTask_WaitForElementBase();

};

