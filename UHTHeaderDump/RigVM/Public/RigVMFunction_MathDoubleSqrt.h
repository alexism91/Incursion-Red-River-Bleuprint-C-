#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleSqrt.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleSqrt();
};

