#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntNegate.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntNegate();
};

