#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMin.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntMin();
};

