#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathFloatBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatBase();
};

