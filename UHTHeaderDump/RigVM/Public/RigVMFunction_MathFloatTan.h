#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatTan.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathFloatTan();
};

