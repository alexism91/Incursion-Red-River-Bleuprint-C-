#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetVector2DAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetVector2DAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    CONTROLRIG_API FRigUnit_GetVector2DAnimationChannelFromItem();
};

