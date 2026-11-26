#pragma once
#include "CoreMinimal.h"
#include "RigVMTrait_OptimusVariableBase.h"
#include "RigVMTrait_SetDeformerIntArrayVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_SetDeformerIntArrayVariable : public FRigVMTrait_OptimusVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value;
    
    OPTIMUSCORE_API FRigVMTrait_SetDeformerIntArrayVariable();
};

