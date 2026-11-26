#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntAdd.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntAdd();
};

