#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatAbs();
};

