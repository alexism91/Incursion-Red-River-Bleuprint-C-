#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetBoolAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetBoolAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    CONTROLRIG_API FRigUnit_GetBoolAnimationChannelFromItem();
};

