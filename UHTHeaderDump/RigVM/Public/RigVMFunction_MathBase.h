#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_MathBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBase();
};

