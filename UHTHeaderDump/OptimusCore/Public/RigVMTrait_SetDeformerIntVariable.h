#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerIntVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerIntVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerIntVariable();
};

