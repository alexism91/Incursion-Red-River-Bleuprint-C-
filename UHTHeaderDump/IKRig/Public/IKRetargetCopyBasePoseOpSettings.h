#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetCopyBasePoseOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetCopyBasePoseOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CopyBasePoseRoot;
    
    IKRIG_API FIKRetargetCopyBasePoseOpSettings();
};

