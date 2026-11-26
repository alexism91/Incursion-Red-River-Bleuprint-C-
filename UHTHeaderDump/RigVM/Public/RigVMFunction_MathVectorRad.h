#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorRad.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorRad();
};

