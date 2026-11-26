#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetRotatorAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetRotatorAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    CONTROLRIG_API FRigUnit_GetRotatorAnimationChannelFromItem();
};

