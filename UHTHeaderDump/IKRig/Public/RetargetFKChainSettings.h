#pragma once
#include "CoreMinimal.h"
#include "EFKChainRotationMode.h"
#include "EFKChainTranslationMode.h"
#include "RetargetFKChainSettings.generated.h"

USTRUCT(BlueprintType)
struct FRetargetFKChainSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFKChainRotationMode RotationMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFKChainTranslationMode TranslationMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TranslationAlpha;
    
    IKRIG_API FRetargetFKChainSettings();
};

