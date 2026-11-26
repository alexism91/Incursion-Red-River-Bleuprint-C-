#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleAtan2.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleAtan2 : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathDoubleAtan2();
};

