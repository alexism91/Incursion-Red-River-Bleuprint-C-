#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMRunInstructionsOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMRunInstructionsOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMRunInstructionsOp();
};

