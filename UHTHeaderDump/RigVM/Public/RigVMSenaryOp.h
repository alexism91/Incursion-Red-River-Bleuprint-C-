#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMSenaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMSenaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMSenaryOp();
};

