#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetFloatAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetFloatAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    CONTROLRIG_API FRigUnit_SetFloatAnimationChannelFromItem();
};

