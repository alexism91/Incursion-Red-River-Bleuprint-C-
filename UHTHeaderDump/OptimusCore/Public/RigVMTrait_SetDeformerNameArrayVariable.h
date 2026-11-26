#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerNameArrayVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerNameArrayVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerNameArrayVariable();
};

