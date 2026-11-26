#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "HTNTask_TargetTask.generated.h"

UCLASS(Abstract, Blueprintable)
class TEST_C_API UHTNTask_TargetTask : public UHTNTask {
    GENERATED_BODY()
public:
    UHTNTask_TargetTask();

};

