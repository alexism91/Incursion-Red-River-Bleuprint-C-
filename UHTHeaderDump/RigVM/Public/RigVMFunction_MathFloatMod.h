#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatMod.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatMod();
};

