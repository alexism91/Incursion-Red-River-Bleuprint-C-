#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathVectorBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorBase();
};

