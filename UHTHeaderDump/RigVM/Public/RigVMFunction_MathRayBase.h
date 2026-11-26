#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathRayBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathRayBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathRayBase();
};

