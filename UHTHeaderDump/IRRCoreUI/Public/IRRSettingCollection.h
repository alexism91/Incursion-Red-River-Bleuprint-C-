#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EIRRSettingStorage.h"
#include "IRRSettingDefinition.h"
#include "IRRSettingSection.h"
#include "IRRSettingValue.h"
#include "IRRSettingCollection.generated.h"

class UIRRSettingPresetProvider;
class UIRRSettingsSaveGame;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRSettingCollection : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRSettingStorage Storage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SchemaVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRSettingSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSettingPresetProvider* PresetProvider;
    
    UIRRSettingCollection();

    UFUNCTION(BlueprintCallable)
    static bool SanitizeValue(const FIRRSettingDefinition& Definition, UPARAM(Ref) FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIRRSettingValue ResolveValue(const FIRRSettingDefinition& Definition, const UIRRSettingsSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RequiresRestart(const FIRRSettingDefinition& Definition, const FIRRSettingValue& RunningValue, const FIRRSettingValue& NewValue);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeOptionValueByIndex(const FIRRSettingDefinition& Definition, int32 OptionIndex, FIRRSettingValue& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeOptionValueById(const FIRRSettingDefinition& Definition, FName OptionId, FIRRSettingValue& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIRRSettingValue MakeDefaultValue(const FIRRSettingDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRSettingDefinition> K2_GetAllSettings() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetSettingIdOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveSlotName() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetContainerNameOptions() const;
    
};

