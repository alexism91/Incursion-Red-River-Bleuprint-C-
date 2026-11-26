#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "RetargetPoleVectorSettings.h"
#include "IKRetargetAlignPoleVectorOpSettings.generated.h"

class UIKRigDefinition;

USTRUCT(BlueprintType)
struct FIKRetargetAlignPoleVectorOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRigDefinition* IKRigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetPoleVectorSettings> ChainsToAlign;
    
    IKRIG_API FIKRetargetAlignPoleVectorOpSettings();
};

