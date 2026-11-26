#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstPi.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatConstPi();
};

