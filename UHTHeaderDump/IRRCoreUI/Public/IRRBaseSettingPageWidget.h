#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "EIRRSettingApplyMode.h"
#include "IRRSettingDefinition.h"
#include "IRRSettingEditState.h"
#include "IRRSettingPreset.h"
#include "IRRSettingSection.h"
#include "IRRSettingValue.h"
#include "IRRUserWidget.h"
#include "Templates/SubclassOf.h"
#include "IRRBaseSettingPageWidget.generated.h"

class UIRRBaseSettingBarWidget;
class UIRRSettingCollection;
class UIRRSettingCollectionModel;
class UPanelWidget;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseSettingPageWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSettingValueChanged, FName, SettingId, const FIRRSettingValue&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPresetsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPendingChangesChanged, bool, bHasPendingChanges);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRSettingCollection* SettingCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIRRBaseSettingBarWidget> DefaultRowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SectionHeaderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin RowPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HeaderPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRSettingApplyMode ApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardPendingOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnpauseWhileApplying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnpauseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewInDesigner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SettingsContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPresetsChanged OnPresetsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingValueChanged OnSettingValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPendingChangesChanged OnPendingChangesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRSettingCollectionModel* Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> GeneratedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIRRBaseSettingBarWidget*> GeneratedBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UIRRBaseSettingBarWidget*> BarsById;
    
public:
    UIRRBaseSettingPageWidget();

    UFUNCTION(BlueprintCallable)
    bool SetSettingValue(FName SettingId, FIRRSettingValue Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRestartRequired(FName Key, bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetHasUnappliedChanges(bool bUnapplied);
    
    UFUNCTION(BlueprintCallable)
    bool SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    bool SavePreset(const FText& DisplayName, FName& OutPresetId);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ResetSettingToDefault(FName SettingId);
    
    UFUNCTION(BlueprintCallable)
    void ResetSection(FName SectionId);
    
    UFUNCTION(BlueprintCallable)
    void ResetContainer(FName ContainerName);
    
    UFUNCTION(BlueprintCallable)
    void RefreshEngineValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSettingBarHovered(bool bHovered, UIRRBaseSettingBarWidget* BarWidget);
    
    UFUNCTION(BlueprintCallable)
    bool LoadPreset(FName PresetId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSettingChanged(FName SettingId, const FIRRSettingValue& Value, bool bFromUI);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDiscardChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnApplyChanges();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingAwaitingRestart(FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingAtDefault(FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestartRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeSectionHeader(UUserWidget* HeaderWidget, const FIRRSettingSection& Section);
    
    UFUNCTION(BlueprintCallable)
    bool ImportPreset(const FString& Code, FName& OutPresetId, FText& OutMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSettingsToReset(FName ContainerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingChanges() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleModelValueChanged(FName SettingId, const FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleModelPresetsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleModelPendingChanged(bool bHasPendingChanges);
    
    UFUNCTION(BlueprintCallable)
    void HandleModelHandlersApplied();
    
    UFUNCTION(BlueprintCallable)
    void HandleModelEditStateChanged(FName SettingId, const FIRRSettingEditState& State);
    
    UFUNCTION(BlueprintCallable)
    void HandleModelDefinitionChanged(FName SettingId);
    
    UFUNCTION(BlueprintCallable)
    void HandleBarValueCommitted(UIRRBaseSettingBarWidget* BarWidget, const FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleBarResetRequested(UIRRBaseSettingBarWidget* BarWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingValue(FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingEditState(FName SettingId, FIRRSettingEditState& OutState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UIRRBaseSettingBarWidget*> GetSettingBarWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRBaseSettingBarWidget* GetSettingBar(FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPanelWidget* GetSectionContainer(FName ContainerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRuntimeSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetResetWarning(FName ContainerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingPreset> GetPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPendingSettingIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRSettingCollectionModel* GetModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportPreset(FName PresetId) const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateConditions();
    
    UFUNCTION(BlueprintCallable)
    void DiscardChanges();
    
    UFUNCTION(BlueprintCallable)
    bool DeletePreset(FName PresetId);
    
    UFUNCTION(BlueprintCallable)
    void BuildSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

