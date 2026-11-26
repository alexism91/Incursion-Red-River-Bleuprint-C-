#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleSub.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleSub();
};

