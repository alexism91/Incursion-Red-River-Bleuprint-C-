#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetAnimationChannelFromItemBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetAnimationChannelFromItemBase : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitial;
    
    CONTROLRIG_API FRigUnit_GetAnimationChannelFromItemBase();
};

