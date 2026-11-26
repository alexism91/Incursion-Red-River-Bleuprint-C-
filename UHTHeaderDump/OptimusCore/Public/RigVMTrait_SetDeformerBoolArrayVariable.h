#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerBoolArrayVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerBoolArrayVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerBoolArrayVariable();
};

