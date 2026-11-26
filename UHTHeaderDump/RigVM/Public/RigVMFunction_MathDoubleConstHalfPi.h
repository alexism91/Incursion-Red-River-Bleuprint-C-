#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleConstHalfPi();
};

