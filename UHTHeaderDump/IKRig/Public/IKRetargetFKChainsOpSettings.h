#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "RetargetFKChainSettings.h"
#include "IKRetargetFKChainsOpSettings.generated.h"

class UIKRigDefinition;

USTRUCT(BlueprintType)
struct FIKRetargetFKChainsOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRigDefinition* IKRigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetFKChainSettings> ChainsToRetarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawChainLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSingleBoneChains;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ChainDrawThickness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ChainDrawSize;
    
    IKRIG_API FIKRetargetFKChainsOpSettings();
};

