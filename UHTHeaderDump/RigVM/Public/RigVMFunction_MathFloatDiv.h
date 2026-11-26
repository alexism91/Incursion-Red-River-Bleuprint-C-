#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatDiv.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatDiv();
};

