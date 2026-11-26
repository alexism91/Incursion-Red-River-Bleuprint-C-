#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleArraySum.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> Array;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Sum;
    
    RIGVM_API FRigVMFunction_MathDoubleArraySum();
};

