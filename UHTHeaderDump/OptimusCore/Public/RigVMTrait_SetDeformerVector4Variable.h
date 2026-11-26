#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerVector4Variable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerVector4Variable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerVector4Variable();
};

