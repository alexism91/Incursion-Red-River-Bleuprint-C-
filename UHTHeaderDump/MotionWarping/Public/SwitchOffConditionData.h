#pragma once
#include "CoreMinimal.h"
#include "SwitchOffConditionData.generated.h"

class UMotionWarpingSwitchOffCondition;

USTRUCT(BlueprintType)
struct FSwitchOffConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarpTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMotionWarpingSwitchOffCondition*> SwitchOffConditions;
    
    MOTIONWARPING_API FSwitchOffConditionData();
};

