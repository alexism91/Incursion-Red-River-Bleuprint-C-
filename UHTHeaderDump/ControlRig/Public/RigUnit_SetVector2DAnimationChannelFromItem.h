#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetVector2DAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetVector2DAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    CONTROLRIG_API FRigUnit_SetVector2DAnimationChannelFromItem();
};

