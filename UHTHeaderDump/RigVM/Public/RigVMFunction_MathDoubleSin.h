#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleSin.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleSin();
};

