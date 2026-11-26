#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMJumpToBranchOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMJumpToBranchOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMJumpToBranchOp();
};

