#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathTransformUnaryOp.h"
#include "RigVMFunction_MathTransformInverse.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathTransformInverse();
};

