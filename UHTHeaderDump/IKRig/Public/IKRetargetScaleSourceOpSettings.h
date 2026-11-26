#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetScaleSourceOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetScaleSourceOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SourceScaleFactor;
    
    IKRIG_API FIKRetargetScaleSourceOpSettings();
};

