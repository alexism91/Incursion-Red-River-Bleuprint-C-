#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMul.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntMul();
};

