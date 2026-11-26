#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntMake.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    RIGVM_API FRigVMFunction_MathIntMake();
};

