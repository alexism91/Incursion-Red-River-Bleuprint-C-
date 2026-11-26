#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMExecuteOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMExecuteOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMExecuteOp();
};

