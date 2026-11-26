#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMQuaternaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMQuaternaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMQuaternaryOp();
};

