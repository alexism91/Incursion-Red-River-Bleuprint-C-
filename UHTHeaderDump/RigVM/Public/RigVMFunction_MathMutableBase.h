#pragma once
#include "CoreMinimal.h"
#include "RigVMStructMutable.h"
#include "RigVMFunction_MathMutableBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathMutableBase : public FRigVMStructMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathMutableBase();
};

