#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathTransformBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathTransformBase();
};

