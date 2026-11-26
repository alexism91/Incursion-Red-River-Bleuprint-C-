#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMTrait -FallbackName=RigVMTrait
#include "EOptimusDeformerExecutionPhase.h"
#include "RigVMTrait_OptimusDeformerSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait_OptimusDeformerSettings : public FRigVMTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDeformerExecutionPhase ExecutionPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecutionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeformChildComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExcludeChildComponentsWithTag;
    
    OPTIMUSCORE_API FRigVMTrait_OptimusDeformerSettings();
};

