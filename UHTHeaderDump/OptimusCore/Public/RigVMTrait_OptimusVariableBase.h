#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMTrait -FallbackName=RigVMTrait
#include "RigVMTrait_OptimusVariableBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_OptimusVariableBase : public FRigVMTrait {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FRigVMTrait_OptimusVariableBase();
};

