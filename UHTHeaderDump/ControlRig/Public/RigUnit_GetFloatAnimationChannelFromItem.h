#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetFloatAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetFloatAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    CONTROLRIG_API FRigUnit_GetFloatAnimationChannelFromItem();
};

