#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerInt3ArrayVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerInt3ArrayVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerInt3ArrayVariable();
};

