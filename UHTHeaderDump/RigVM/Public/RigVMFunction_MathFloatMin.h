#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryAggregateOp.h"
#include "RigVMFunction_MathFloatMin.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatMin();
};

