#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "HTNDecorator_SimpleTask.generated.h"

UCLASS(Abstract, Blueprintable)
class TEST_C_API UHTNDecorator_SimpleTask : public UHTNDecorator {
    GENERATED_BODY()
public:
    UHTNDecorator_SimpleTask();

};

