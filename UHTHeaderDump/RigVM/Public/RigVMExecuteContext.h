#pragma once
#include "CoreMinimal.h"
#include "RigVMExecutePin.h"
#include "RigVMExecuteContext.generated.h"

USTRUCT(BlueprintType)
struct FRigVMExecuteContext : public FRigVMExecutePin {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMExecuteContext();
};

