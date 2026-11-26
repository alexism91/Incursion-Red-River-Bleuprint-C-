#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatAtan2.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatAtan2 : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatAtan2();
};

