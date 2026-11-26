#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatMake.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    RIGVM_API FRigVMFunction_MathFloatMake();
};

