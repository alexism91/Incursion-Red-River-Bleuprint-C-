#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMSetupTraitsOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMSetupTraitsOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMSetupTraitsOp();
};

