#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolUnaryOp.h"
#include "RigVMFunction_MathBoolNot.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoolNot();
};

