#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleDiv.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleDiv();
};

