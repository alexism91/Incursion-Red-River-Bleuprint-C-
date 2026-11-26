#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings.h"
#include "RigUnit_HierarchyAddAnimationChannelSingleLimitSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Enabled;
    
    CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings();
};

