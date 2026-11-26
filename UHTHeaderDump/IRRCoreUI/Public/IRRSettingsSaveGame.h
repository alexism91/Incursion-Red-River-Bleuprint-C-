#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "IRRSettingValue.h"
#include "IRRSettingsSaveGame.generated.h"

class UIRRSettingCollection;
class UIRRSettingsSaveGame;
class UObject;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRSettingsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SchemaVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRSettingValue> Values;
    
    UIRRSettingsSaveGame();

    UFUNCTION(BlueprintCallable)
    void SetValue(FName SettingId, const FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSettings(UIRRSettingsSaveGame* SaveGame, const UIRRSettingCollection* Collection, bool bAsync);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadSettingValue(UObject* WorldContextObject, const UIRRSettingCollection* Collection, FName SettingId, FIRRSettingValue& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static UIRRSettingsSaveGame* LoadSettings(const UIRRSettingCollection* Collection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindValue(FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSettings(const UIRRSettingCollection* Collection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplySavedSettings(UObject* WorldContextObject, UIRRSettingCollection* Collection);
    
};

