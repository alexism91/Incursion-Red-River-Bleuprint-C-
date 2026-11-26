#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntSign.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntSign();
};

