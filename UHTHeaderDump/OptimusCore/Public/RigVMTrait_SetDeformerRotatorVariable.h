#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerRotatorVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerRotatorVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerRotatorVariable();
};

