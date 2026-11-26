#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.h"
#include "RigVMFunction_MathDoubleMax.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleMax();
};

