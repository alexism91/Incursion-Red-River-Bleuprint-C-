#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathColorBinaryAggregateOp.h"
#include "RigVMFunction_MathColorAdd.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathColorAdd();
};

