#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMJumpIfOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMJumpIfOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMJumpIfOp();
};

