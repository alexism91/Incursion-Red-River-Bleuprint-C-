#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathColorBinaryOp.h"
#include "RigVMFunction_MathColorSub.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathColorSub();
};

