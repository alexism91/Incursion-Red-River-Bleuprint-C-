#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMComparisonOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMComparisonOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMComparisonOp();
};

