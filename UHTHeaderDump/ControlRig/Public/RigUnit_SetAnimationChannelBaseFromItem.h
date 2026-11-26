#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExecutePin -FallbackName=RigVMExecutePin
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_SetAnimationChannelBaseFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetAnimationChannelBaseFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    CONTROLRIG_API FRigUnit_SetAnimationChannelBaseFromItem();
};

