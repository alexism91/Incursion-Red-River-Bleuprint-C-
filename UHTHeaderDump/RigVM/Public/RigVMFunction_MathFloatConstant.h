#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatConstant.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    RIGVM_API FRigVMFunction_MathFloatConstant();
};

