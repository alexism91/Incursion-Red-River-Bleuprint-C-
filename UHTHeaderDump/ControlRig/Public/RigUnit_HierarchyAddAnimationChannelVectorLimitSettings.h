#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings.h"
#include "RigUnit_HierarchyAddAnimationChannelVectorLimitSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlLimitEnabled Z;
    
    CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings();
};

