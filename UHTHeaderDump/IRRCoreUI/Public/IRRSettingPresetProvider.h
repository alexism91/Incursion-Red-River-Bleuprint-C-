#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRSettingPreset.h"
#include "IRRSettingPresetProvider.generated.h"

class UIRRSettingCollectionModel;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class IRRCOREUI_API UIRRSettingPresetProvider : public UObject {
    GENERATED_BODY()
public:
    UIRRSettingPresetProvider();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SavePreset(UIRRSettingCollectionModel* Model, const FText& DisplayName, FName& OutPresetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetPresetData(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MakePresetId(const FText& DisplayName, const TArray<FName>& TakenIds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LoadPreset(UIRRSettingCollectionModel* Model, FName PresetId, bool bDefer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ImportPreset(UIRRSettingCollectionModel* Model, const FString& Code, FName& OutPresetId, FText& OutMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasPresetDataToReset(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetResetWarning(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPresets(UIRRSettingCollectionModel* Model, TArray<FIRRSettingPreset>& OutPresets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString ExportPreset(UIRRSettingCollectionModel* Model, FName PresetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DeletePreset(UIRRSettingCollectionModel* Model, FName PresetId);
    
};

