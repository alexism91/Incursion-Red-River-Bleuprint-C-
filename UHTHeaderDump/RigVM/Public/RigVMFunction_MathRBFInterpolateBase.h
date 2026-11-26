#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathRBFInterpolateBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathRBFInterpolateBase();
};

