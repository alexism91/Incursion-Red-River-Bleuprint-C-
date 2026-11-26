#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EColorVisionDeficiency -FallbackName=EColorVisionDeficiency
#include "EIRRPostProcessSetting.h"
#include "IRRPlayerSettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRPlayerSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCorrectColorVisionDeficiency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessOverrides;
    
public:
    UIRRPlayerSettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetPostProcessValue(EIRRPostProcessSetting Setting, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVisionSeverity(float Severity);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVisionDeficiency(EColorVisionDeficiency Type);
    
};

