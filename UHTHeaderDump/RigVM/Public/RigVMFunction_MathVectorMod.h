#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorMod.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorMod();
};

