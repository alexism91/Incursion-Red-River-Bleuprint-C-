#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddAnimationChannelSingleLimitSettings.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelScaleFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddAnimationChannelScaleFloat : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;
    
    CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelScaleFloat();
};

