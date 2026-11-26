#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMChangeTypeOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMChangeTypeOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMChangeTypeOp();
};

