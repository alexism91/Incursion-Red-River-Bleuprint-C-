#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatArrayAverage.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Average;
    
    RIGVM_API FRigVMFunction_MathFloatArrayAverage();
};

