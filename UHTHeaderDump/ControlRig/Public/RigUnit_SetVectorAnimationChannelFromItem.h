#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SetAnimationChannelBaseFromItem.h"
#include "RigUnit_SetVectorAnimationChannelFromItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetVectorAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    CONTROLRIG_API FRigUnit_SetVectorAnimationChannelFromItem();
};

