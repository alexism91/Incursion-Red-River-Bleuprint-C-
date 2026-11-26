#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMDebugDrawSettings -FallbackName=RigVMDebugDrawSettings
#include "RigUnit.h"
#include "RigUnit_DebugBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DebugBase : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMDebugDrawSettings DebugDrawSettings;
    
    CONTROLRIG_API FRigUnit_DebugBase();
};

