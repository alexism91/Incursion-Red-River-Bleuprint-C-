#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorAbs();
};

