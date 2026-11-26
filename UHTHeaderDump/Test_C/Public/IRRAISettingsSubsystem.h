#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "EIRRAIPresetSource.h"
#include "IRRAIPresetMetadata.h"
#include "IRRAISettingsCategoryChangedDelegate.h"
#include "IRRAISettingsSelectionChangedDelegate.h"
#include "IRRSettingsCategorySpec.h"
#include "IRRSettingsChangeLogEntry.h"
#include "IRRSettingsVariantInfo.h"
#include "IRRAISettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAISettingsSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISettingsSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISettingsCategoryChanged OnCategoryValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIRRSettingsCategorySpec> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FInstancedStruct> CurrentValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAIPresetMetadata> Presets;
    
public:
    UIRRAISettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleSettingsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName SuggestNewVariantId(FName CategoryId, FName SourceVariantId) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetCategoryValue(FName CategoryId, const FInstancedStruct& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthoringMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveVariantForCategory(FName CategoryId, FName VariantId);
    
    UFUNCTION(BlueprintCallable)
    bool SetActivePreset(FName PresetId);
    
    UFUNCTION(BlueprintCallable)
    void ScanVariants();
    
    UFUNCTION(BlueprintCallable)
    void ScanPresets();
    
    UFUNCTION(BlueprintCallable)
    bool SaveSelectionAsPreset(FName NewPresetId, FText DisplayName, FText Description);
    
    UFUNCTION(BlueprintCallable)
    bool RenameVariant(FName CategoryId, FName VariantId, FName NewVariantId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPresetSearchPath(const FString& Directory, EIRRAIPresetSource Source);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteVariantFrom(FName CategoryId, FName TargetVariantId, FName SourceVariantId);
    
    UFUNCTION(BlueprintCallable)
    void OpenSettingsMenu();
    
    UFUNCTION(BlueprintCallable)
    bool LoadPresetIntoVariant(FName PresetId, FName TargetVariantId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVariantUnsaved(FName CategoryId, FName VariantId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVariantUnedited(FName CategoryId, FName VariantId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedPresetId(FName PresetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReservedDifficultyName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnBaseLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthoringMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool ImportShareCode(const FString& Code, FText& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    bool ImportAndApplyShareCode(const FString& Code, FText& OutMessage, FName LoadIntoVariantId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingsVariantInfo> GetVariantsForCategory(FName CategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedVariantForCategory(FName CategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSelectedVariantDisplayName(FName CategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRAIPresetMetadata> GetPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMatchingPresetId() const;
    
    UFUNCTION(BlueprintCallable)
    static FString GetClipboardText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingsChangeLogEntry> GetChangeLogEntries(int32 MaxEntries) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInstancedStruct GetCategoryValue(FName CategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingsCategorySpec> GetCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetBuiltInVariantDisplayName(FName CategoryId, FName VariantId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportVariantCode(FName CategoryId, FName VariantId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportPresetCode(FName PresetId) const;
    
    UFUNCTION(BlueprintCallable)
    bool DuplicateVariant(FName CategoryId, FName SourceVariantId, FName NewVariantId);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteVariant(FName CategoryId, FName VariantId);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteLocalPreset(FName PresetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CopyVariantCodeToClipboard(FName CategoryId, FName VariantId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CopyPresetCodeToClipboard(FName PresetId) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSettingsMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClearChangeLog();
    
    UFUNCTION(BlueprintCallable)
    void ApplyToWorld();
    
};

