#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ContainerItem.h"
#include "DefaultItem.h"
#include "IRRGunsmithParams.h"
#include "IRRVendorStockItem.h"
#include "InventoryComponent.h"
#include "MainContainer.h"
#include "OnGunsmithParamsUpdatedDelegate.h"
#include "OnGunsmithPresetsChangedDelegate.h"
#include "OnPresetUpdatedDelegate.h"
#include "InventoryComponent_Gunsmith.generated.h"

class UIRRGunsmithSaveGame;
class UIRRItemPreset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UInventoryComponent_Gunsmith : public UInventoryComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItem CachedPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGunsmithParams GunsmithParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuyMarkedCoinParts;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithParamsUpdated OnGunsmithParamsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPresetUpdated OnPresetUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithPresetsChanged OnSavedPresetsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OldStashUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainContainer> OldStashMainContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* GunsmithStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRGunsmithSaveGame* GunsmithSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGuid> SavedPresetItemUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> AssemblySnapshotUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainContainer> AssemblySnapshotMainContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FName> SelectedPartRows;
    
    UInventoryComponent_Gunsmith(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGunsmithParams(FGameplayTagContainer CategoryTag, int32 ContentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitPresetNameOrCode(const FString& NameOrCode, FText& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    void RestoreInventory(UInventoryComponent* TargetInventory);
    
    UFUNCTION(BlueprintCallable)
    void ResetPresetItem();
    
    UFUNCTION(BlueprintCallable)
    bool RequestSavePreset(FName PresetName);
    
    UFUNCTION(BlueprintCallable)
    void PrepareAssemblePreset(TArray<FIRRVendorStockItem>& ToBuyItems, FString& OutErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString MakePresetDataAssetName(const FString& PresetName);
    
    UFUNCTION(BlueprintCallable)
    void LoadSavedPresets();
    
    UFUNCTION(BlueprintCallable)
    bool LoadPresetOntoBench(const FDefaultItem& Preset);
    
    UFUNCTION(BlueprintCallable)
    bool LoadPreset(FDefaultItem Preset, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    FDefaultItem ItemToPreset(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSamePreset(FDefaultItem Preset1, FDefaultItem Preset2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPresetShareCode(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    bool InstallAttachment(FGuid MainContainerUID, int32 ContainerIndex, FContainerItem NewAttachment, bool& EqualToInstalled);
    
    UFUNCTION(BlueprintCallable)
    bool InitPreset(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    bool ImportPresetCode(const FString& Code, FText& OutMessage, FContainerItem& OutPresetItem);
    
    UFUNCTION(BlueprintCallable)
    bool ImportAndApplyPresetCode(const FString& Code, FText& OutMessage, FContainerItem& OutPresetItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSavedPreset(FGameplayTag WeaponTag, FName PresetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPresetChanged();
    
    UFUNCTION(BlueprintCallable)
    bool GetToBuyItems(TArray<FIRRVendorStockItem>& ToBuyItems, TArray<FContainerItem>& ToRemoveStashItems, TArray<FContainerItem> StashItems, FString& OutErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FContainerItem GetSavedPresetItem(FName PresetName);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetPresetItem();
    
    UFUNCTION(BlueprintCallable)
    static FString GetClipboardText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBenchWeaponTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportWeaponPresetCode(FGameplayTag WeaponTag, FName PresetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportPresetCode(FName PresetName) const;
    
    UFUNCTION(BlueprintCallable)
    FString ExportBenchPresetCode(FName PresetName);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSavePreset(FName PresetName);
    
    UFUNCTION(BlueprintCallable)
    UIRRItemPreset* CreatePresetDataAsset(const FString& PresetName, FString& OutErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CopyPresetCodeToClipboard(FName PresetName) const;
    
    UFUNCTION(BlueprintCallable)
    void CachePreset();
    
    UFUNCTION(BlueprintCallable)
    void CacheInventory(UInventoryComponent* SourceInventory);
    
    UFUNCTION(BlueprintCallable)
    FGuid AssemblePreset();
    
};

