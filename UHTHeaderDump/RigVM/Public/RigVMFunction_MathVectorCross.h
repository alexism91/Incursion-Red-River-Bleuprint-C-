#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorCross.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorCross();
};

