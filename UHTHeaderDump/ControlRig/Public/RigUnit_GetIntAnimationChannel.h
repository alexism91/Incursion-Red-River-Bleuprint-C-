#pragma once
#include "CoreMinimal.h"
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_GetIntAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    CONTROLRIG_API FRigUnit_GetIntAnimationChannel();
};

