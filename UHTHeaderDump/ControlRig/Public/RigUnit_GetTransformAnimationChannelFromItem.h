#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetTransformAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetTransformAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    CONTROLRIG_API FRigUnit_GetTransformAnimationChannelFromItem();
};

