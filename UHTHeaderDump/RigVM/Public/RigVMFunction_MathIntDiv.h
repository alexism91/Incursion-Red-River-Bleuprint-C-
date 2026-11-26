#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntDiv.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntDiv();
};

