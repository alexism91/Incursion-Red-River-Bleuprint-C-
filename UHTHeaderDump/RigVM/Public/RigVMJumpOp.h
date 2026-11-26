#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMJumpOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMJumpOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMJumpOp();
};

