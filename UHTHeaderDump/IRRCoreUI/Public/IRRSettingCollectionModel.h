#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRROnModelDefinitionChangedDelegate.h"
#include "IRROnModelEditStateChangedDelegate.h"
#include "IRROnModelHandlersAppliedDelegate.h"
#include "IRROnModelPendingChangedDelegate.h"
#include "IRROnModelPresetsChangedDelegate.h"
#include "IRROnModelValueChangedDelegate.h"
#include "IRRSettingDefinition.h"
#include "IRRSettingEditState.h"
#include "IRRSettingPreset.h"
#include "IRRSettingValue.h"
#include "IRRSettingCollectionModel.generated.h"

class UIRRSettingCollection;
class UIRRSettingsSaveGame;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRSettingCollectionModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelValueChanged OnValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelEditStateChanged OnEditStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelDefinitionChanged OnDefinitionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelPendingChanged OnPendingChangesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelHandlersApplied OnHandlersApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnModelPresetsChanged OnPresetsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRSettingCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRSettingsSaveGame* SaveGame;
    
public:
    UIRRSettingCollectionModel();

    UFUNCTION(BlueprintCallable)
    bool SetSettingValue(FName SettingId, FIRRSettingValue Value, bool bDefer, bool bFromPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool SavePreset(const FText& DisplayName, FName& OutPresetId);
    
    UFUNCTION(BlueprintCallable)
    void SaveNow(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults(bool bDefer);
    
    UFUNCTION(BlueprintCallable)
    void ResetSettingToDefault(FName SettingId, bool bDefer);
    
    UFUNCTION(BlueprintCallable)
    void ResetSection(FName SectionId, bool bDefer);
    
    UFUNCTION(BlueprintCallable)
    void ResetContainer(FName ContainerName, bool bDefer);
    
    UFUNCTION(BlueprintCallable)
    void RefreshEngineValues();
    
    UFUNCTION(BlueprintCallable)
    bool LoadPreset(FName PresetId, bool bDefer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingAwaitingRestart(FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingAtDefault(FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestartRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreview() const;
    
    UFUNCTION(BlueprintCallable)
    bool ImportPreset(const FString& Code, FName& OutPresetId, FText& OutMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSettingsToReset(FName ContainerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPresetProvider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingValue(FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSettingsAwaitingRestart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingEditState(FName SettingId, FIRRSettingEditState& OutState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRunningValue(FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetResetWarning(FName ContainerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingPreset> GetPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerValue(FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPendingSettingIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRSettingCollection* GetCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportPreset(FName PresetId) const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateConditions();
    
    UFUNCTION(BlueprintCallable)
    void DiscardChanges();
    
    UFUNCTION(BlueprintCallable)
    bool DeletePreset(FName PresetId);
    
    UFUNCTION(BlueprintCallable)
    void ApplyValues(const TMap<FName, FIRRSettingValue>& Values, bool bDefer);
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

