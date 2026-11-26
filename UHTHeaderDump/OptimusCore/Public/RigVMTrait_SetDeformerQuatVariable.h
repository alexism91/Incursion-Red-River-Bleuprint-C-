#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerQuatVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerQuatVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerQuatVariable();
};

