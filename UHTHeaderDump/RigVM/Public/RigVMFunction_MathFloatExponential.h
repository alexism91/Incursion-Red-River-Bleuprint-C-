#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatExponential.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatExponential();
};

