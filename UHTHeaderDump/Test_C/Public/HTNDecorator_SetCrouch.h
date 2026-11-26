#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_SimpleTask.h"
#include "HTNDecorator_SetCrouch.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetCrouch : public UHTNDecorator_SimpleTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    UHTNDecorator_SetCrouch();

};

