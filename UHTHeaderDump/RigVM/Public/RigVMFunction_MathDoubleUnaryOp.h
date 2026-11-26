#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    RIGVM_API FRigVMFunction_MathDoubleUnaryOp();
};

