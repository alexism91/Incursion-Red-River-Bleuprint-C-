#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstTwoPi.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleConstTwoPi();
};

