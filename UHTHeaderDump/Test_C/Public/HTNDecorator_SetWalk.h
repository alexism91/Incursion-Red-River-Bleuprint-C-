#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_SimpleTask.h"
#include "HTNDecorator_SetWalk.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetWalk : public UHTNDecorator_SimpleTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    UHTNDecorator_SetWalk();

};

