#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMCopyOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMCopyOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMCopyOp();
};

