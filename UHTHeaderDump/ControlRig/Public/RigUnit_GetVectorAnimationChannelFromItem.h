#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_GetAnimationChannelFromItemBase.h"
#include "RigUnit_GetVectorAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetVectorAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    CONTROLRIG_API FRigUnit_GetVectorAnimationChannelFromItem();
};

