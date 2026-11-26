#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings.h"
#include "RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Roll;
    
    CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings();
};

