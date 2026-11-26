#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathMatrixUnaryOp.h"
#include "RigVMFunction_MathMatrixInverse.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathMatrixInverse();
};

