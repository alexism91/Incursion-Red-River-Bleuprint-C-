#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerVector2Variable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerVector2Variable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerVector2Variable();
};

