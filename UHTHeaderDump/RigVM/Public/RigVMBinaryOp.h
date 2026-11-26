#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMBinaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMBinaryOp();
};

