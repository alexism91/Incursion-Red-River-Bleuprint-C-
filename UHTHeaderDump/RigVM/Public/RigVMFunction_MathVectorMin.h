#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryAggregateOp.h"
#include "RigVMFunction_MathVectorMin.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorMin();
};

