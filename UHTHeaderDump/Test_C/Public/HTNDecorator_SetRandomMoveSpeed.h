#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_SimpleTask.h"
#include "HTNDecorator_SetRandomMoveSpeed.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetRandomMoveSpeed : public UHTNDecorator_SimpleTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UHTNDecorator_SetRandomMoveSpeed();

};

