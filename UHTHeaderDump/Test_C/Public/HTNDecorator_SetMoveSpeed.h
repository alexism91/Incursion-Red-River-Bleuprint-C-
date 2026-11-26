#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_SimpleTask.h"
#include "HTNDecorator_SetMoveSpeed.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetMoveSpeed : public UHTNDecorator_SimpleTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UHTNDecorator_SetMoveSpeed();

};

