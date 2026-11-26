#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowMode -FallbackName=EWindowMode
#include "IRRDisplaySettingsLibrary.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRDisplaySettingsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRDisplaySettingsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsResolutionSelectable(TEnumAsByte<EWindowMode::Type> WindowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExclusiveFullscreenAvailable();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> GetSelectableResolutions(TEnumAsByte<EWindowMode::Type> WindowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxTextureQualityForVideoMemory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EWindowMode::Type> GetAllowedWindowMode(TEnumAsByte<EWindowMode::Type> WindowMode);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint FitWindowedResolution(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    static bool CorrectDisplaySettings();
    
    UFUNCTION(BlueprintCallable)
    static bool ClampTextureQualityToVideoMemory(bool bApplyAndSave);
    
};

