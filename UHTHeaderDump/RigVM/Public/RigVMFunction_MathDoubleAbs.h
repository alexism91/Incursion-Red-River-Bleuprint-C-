#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleAbs();
};

