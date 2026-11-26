#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerVectorVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerVectorVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerVectorVariable();
};

