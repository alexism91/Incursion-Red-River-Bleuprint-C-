#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryAggregateOp.h"
#include "RigVMFunction_MathBoolOr.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoolOr();
};

