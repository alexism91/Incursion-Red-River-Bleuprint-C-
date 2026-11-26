#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathDoubleBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleBase();
};

