#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathColorBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathColorBase();
};

