#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetIntAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetIntAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    CONTROLRIG_API FRigUnit_GetIntAnimationChannelFromItem();
};

