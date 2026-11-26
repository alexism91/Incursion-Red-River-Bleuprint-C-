#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathQuaternionRotationOrder.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEulerRotationOrder RotationOrder;
    
    RIGVM_API FRigVMFunction_MathQuaternionRotationOrder();
};

