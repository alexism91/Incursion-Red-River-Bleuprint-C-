#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionUnaryOp.h"
#include "RigVMFunction_MathQuaternionUnit.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathQuaternionUnit();
};

