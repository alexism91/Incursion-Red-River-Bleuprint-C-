#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerInt2Variable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerInt2Variable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerInt2Variable();
};

