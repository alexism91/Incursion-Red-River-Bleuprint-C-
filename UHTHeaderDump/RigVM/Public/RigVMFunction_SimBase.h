#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_SimBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_SimBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_SimBase();
};

