#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings.h"
#include "RigUnit_HierarchyAddAnimationChannel2DLimitSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Y;
    
    CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannel2DLimitSettings();
};

