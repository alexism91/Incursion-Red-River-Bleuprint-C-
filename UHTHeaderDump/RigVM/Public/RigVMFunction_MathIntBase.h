#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathIntBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_MathIntBase();
};

