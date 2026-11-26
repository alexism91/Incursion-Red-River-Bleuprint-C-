#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBase.h"
#include "RigVMFunction_MathBoolConstant.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    RIGVM_API FRigVMFunction_MathBoolConstant();
};

