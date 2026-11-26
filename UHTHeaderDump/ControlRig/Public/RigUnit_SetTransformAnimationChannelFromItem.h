#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetTransformAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetTransformAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    CONTROLRIG_API FRigUnit_SetTransformAnimationChannelFromItem();
};

