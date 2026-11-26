#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleRad.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleRad();
};

