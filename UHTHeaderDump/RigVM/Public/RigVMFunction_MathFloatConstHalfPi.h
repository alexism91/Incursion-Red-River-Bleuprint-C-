#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatConstHalfPi();
};

