#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMDebugDrawSettings -FallbackName=RigVMDebugDrawSettings
#include "RigUnitMutable.h"
#include "RigUnit_DebugBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMDebugDrawSettings DebugDrawSettings;
    
    CONTROLRIG_API FRigUnit_DebugBaseMutable();
};

