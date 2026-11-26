#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatSqrt.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatSqrt();
};

