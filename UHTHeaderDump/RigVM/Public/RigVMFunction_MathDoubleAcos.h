#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleAcos.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleAcos();
};

