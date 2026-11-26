#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnitMutable -FallbackName=RigUnitMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "RigUnit_AddOptimusDeformer.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AddOptimusDeformer : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DeformerInstanceGuid;
    
    OPTIMUSCORE_API FRigUnit_AddOptimusDeformer();
};

