#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_ControlFlowBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_ControlFlowBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_ControlFlowBase();
};

