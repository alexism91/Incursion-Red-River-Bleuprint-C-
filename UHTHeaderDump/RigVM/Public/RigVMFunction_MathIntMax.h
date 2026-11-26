#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMax.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntMax();
};

