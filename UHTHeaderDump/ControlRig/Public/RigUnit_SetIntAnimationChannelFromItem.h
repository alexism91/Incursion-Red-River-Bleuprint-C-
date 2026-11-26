#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetIntAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetIntAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    CONTROLRIG_API FRigUnit_SetIntAnimationChannelFromItem();
};

