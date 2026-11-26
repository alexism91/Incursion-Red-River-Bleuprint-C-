#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryOp.h"
#include "RigVMFunction_MathBoolNand2.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathBoolNand2();
};

