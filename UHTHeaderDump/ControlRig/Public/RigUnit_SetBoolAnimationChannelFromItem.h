#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetBoolAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetBoolAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    CONTROLRIG_API FRigUnit_SetBoolAnimationChannelFromItem();
};

