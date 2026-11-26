#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExecutePin -FallbackName=RigVMExecutePin
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_SetAnimationChannelBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    CONTROLRIG_API FRigUnit_SetAnimationChannelBase();
};

