#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector4 -FallbackName=IntVector4
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerInt4Variable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerInt4Variable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector4 Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerInt4Variable();
};

