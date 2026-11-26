#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetRotatorAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetRotatorAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    CONTROLRIG_API FRigUnit_SetRotatorAnimationChannelFromItem();
};

