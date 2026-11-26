#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoublePow.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoublePow();
};

