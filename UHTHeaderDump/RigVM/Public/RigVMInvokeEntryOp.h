#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMInvokeEntryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMInvokeEntryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMInvokeEntryOp();
};

