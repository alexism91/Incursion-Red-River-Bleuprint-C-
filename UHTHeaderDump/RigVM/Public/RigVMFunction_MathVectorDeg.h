#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorDeg.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathVectorDeg();
};

