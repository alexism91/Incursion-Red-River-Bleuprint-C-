#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "HTNTask_SetMovementSpeed.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_SetMovementSpeed : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UHTNTask_SetMovementSpeed();

};

