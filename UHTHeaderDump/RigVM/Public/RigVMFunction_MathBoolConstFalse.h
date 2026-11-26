#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolConstant.h"
#include "RigVMFunction_MathBoolConstFalse.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoolConstFalse();
};

