#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRGameplaySettings.h"
#include "SettingsFunctionLibrary.generated.h"

class UObject;
class USettingsSaveGame;

UCLASS(Blueprintable)
class TEST_C_API USettingsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USettingsFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetAutoLowReadyOnIdleEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMainSettingsSaveFile(USettingsSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSettingsFileName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesSettingsSaveFileExist();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyGameplaySettings(UObject* WorldContextObject, const FIRRGameplaySettings& Settings);
    
};

