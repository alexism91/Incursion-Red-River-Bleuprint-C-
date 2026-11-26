#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerNameVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerNameVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerNameVariable();
};

