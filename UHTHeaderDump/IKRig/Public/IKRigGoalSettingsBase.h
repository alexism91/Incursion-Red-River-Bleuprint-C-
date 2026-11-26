#pragma once
#include "CoreMinimal.h"
#include "IKRigSettingsBase.h"
#include "IKRigGoalSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FIKRigGoalSettingsBase : public FIKRigSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Goal;
    
    IKRIG_API FIKRigGoalSettingsBase();
};

