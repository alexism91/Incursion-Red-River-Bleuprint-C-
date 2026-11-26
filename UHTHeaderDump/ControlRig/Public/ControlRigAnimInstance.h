#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ControlRigAnimInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UControlRigAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UControlRigAnimInstance();

};

