#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetAnimationChannelBase.h"
#include "RigUnit_SetFloatAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    CONTROLRIG_API FRigUnit_SetFloatAnimationChannel();
};

