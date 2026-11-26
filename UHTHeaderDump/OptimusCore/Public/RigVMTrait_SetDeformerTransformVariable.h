#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerTransformVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerTransformVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerTransformVariable();
};

