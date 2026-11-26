#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathBoxBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoxBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoxBase();
};

