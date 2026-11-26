#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntAbs();
};

