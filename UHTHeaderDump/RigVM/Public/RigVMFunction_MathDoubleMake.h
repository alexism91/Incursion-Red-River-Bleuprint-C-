#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleMake.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    RIGVM_API FRigVMFunction_MathDoubleMake();
};

