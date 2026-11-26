#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntSub.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntSub();
};

