#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerFloatVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerFloatVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerFloatVariable();
};

