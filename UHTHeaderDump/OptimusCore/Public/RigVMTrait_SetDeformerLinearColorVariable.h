#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerLinearColorVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerLinearColorVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerLinearColorVariable();
};

