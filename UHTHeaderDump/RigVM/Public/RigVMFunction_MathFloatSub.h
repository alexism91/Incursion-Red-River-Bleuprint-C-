#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatSub.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatSub();
};

