#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnitMutable -FallbackName=RigUnitMutable
#include "RigUnit_RigLogic_Data.h"
#include "RigUnit_RigLogic.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RigLogic : public FRigUnitMutable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_RigLogic_Data Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
public:
    RIGLOGICMODULE_API FRigUnit_RigLogic();
};

