#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathMatrixBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathMatrixBase();
};

