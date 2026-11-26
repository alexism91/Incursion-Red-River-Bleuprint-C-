#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetAdditivePoseOpSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FIKRetargetAdditivePoseOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoseToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    FIKRetargetAdditivePoseOpSettings();
};

