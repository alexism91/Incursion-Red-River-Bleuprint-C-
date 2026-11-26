#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMTernaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTernaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMTernaryOp();
};

