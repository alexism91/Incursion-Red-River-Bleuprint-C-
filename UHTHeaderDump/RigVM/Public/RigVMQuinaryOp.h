#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMQuinaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMQuinaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMQuinaryOp();
};

