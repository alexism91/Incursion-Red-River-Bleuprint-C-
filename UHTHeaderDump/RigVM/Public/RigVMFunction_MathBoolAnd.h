#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryAggregateOp.h"
#include "RigVMFunction_MathBoolAnd.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoolAnd();
};

