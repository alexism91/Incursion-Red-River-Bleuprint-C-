#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionBinaryAggregateOp.h"
#include "RigVMFunction_MathQuaternionMul.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathQuaternionMul();
};

