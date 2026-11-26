#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorSub.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorSub();
};

