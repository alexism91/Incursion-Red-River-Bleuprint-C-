#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMUnaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMUnaryOp();
};

