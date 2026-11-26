#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionUnaryOp.h"
#include "RigVMFunction_MathQuaternionInverse.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathQuaternionInverse();
};

