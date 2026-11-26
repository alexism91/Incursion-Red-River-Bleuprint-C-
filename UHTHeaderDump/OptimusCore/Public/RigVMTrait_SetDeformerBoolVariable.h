#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerBoolVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerBoolVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerBoolVariable();
};

