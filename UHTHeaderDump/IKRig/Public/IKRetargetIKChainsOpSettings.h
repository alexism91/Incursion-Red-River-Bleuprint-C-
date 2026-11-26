#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "RetargetIKChainSettings.h"
#include "IKRetargetIKChainsOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetIKChainsOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetIKChainSettings> ChainsToRetarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawFinalGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSourceLocations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GoalDrawSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GoalDrawThickness;
    
    IKRIG_API FIKRetargetIKChainsOpSettings();
};

