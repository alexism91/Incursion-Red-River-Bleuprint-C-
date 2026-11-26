#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMTrait -FallbackName=RigVMTrait
#include "RigVMTrait_OptimusDeformer.generated.h"

class UOptimusDeformer;

USTRUCT(BlueprintType)
struct FRigVMTrait_OptimusDeformer : public FRigVMTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOptimusDeformer> DeformerGraph;
    
    OPTIMUSCORE_API FRigVMTrait_OptimusDeformer();
};

