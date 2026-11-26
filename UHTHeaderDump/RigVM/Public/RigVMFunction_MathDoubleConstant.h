#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleConstant.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    RIGVM_API FRigVMFunction_MathDoubleConstant();
};

