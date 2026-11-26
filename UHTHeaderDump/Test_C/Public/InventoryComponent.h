#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRLoyaltyByFaction -FallbackName=IRRLoyaltyByFaction
#include "BaseStatItem.h"
#include "ContainerElement.h"
#include "ContainerItem.h"
#include "CurrentStatItem.h"
#include "DefaultAttachment.h"
#include "DefaultItem.h"
#include "DefaultItemsContainer.h"
#include "EInventoryType.h"
#include "EItemInteractionType.h"
#include "EPickupState.h"
#include "EReplaceErrorType.h"
#include "MainContainer.h"
#include "MainContainerArray.h"
#include "OnCurrencyChangedDelegate.h"
#include "OnInventoryUpdatedDelegate.h"
#include "OnItemAddedDelegate2.h"
#include "OnItemAddedFromOtherCompDelegate.h"
#include "OnItemDroppedDelegate2.h"
#include "OnItemEquippedDelegate.h"
#include "OnItemPickedUpDelegate.h"
#include "OnItemRemovedDelegate2.h"
#include "OnItemRemovedToOtherCompDelegate.h"
#include "OnItemReserveRequestResponseDelegate.h"
#include "OnItemUnEquippedDelegate.h"
#include "OnPickupItemUpdatedDelegate.h"
#include "OnPickupOwnerUpdatedDelegate.h"
#include "OnPickupStateUpdatedDelegate.h"
#include "OnQuickSlotsUpdatedDelegate.h"
#include "OnStorageContainerUpdatedDelegate.h"
#include "OnWeightChangedDelegate.h"
#include "PickUpContainerItem.h"
#include "PickUpContainerState.h"
#include "QuickLootOrder.h"
#include "QuickSlotItem.h"
#include "ReloadData.h"
#include "ReplicatedContainerSettingsCopy.h"
#include "StorageSubCategory.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class AActor;
class UCurveFloat;
class UIRRDefaultContainerSettings;
class UIRRItemDefinition;
class UIRRItemsPreset;
class UInventoryComponent;
class UInventoryContainerSettings;
class UInventoryDefaultContainerSettings;
class UInventoryEnhancedUISettings;
class UItemWidget;
class UObject;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UInventoryComponent : public UIRRObjectReplicationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSwapDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRDefaultContainerSettings* DefaultContainerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInventoryDefaultContainerSettings*> DefaultContainerList_LEGACY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorageSubCategory> DefaultStorageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* VendorContainerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* RewardContainerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* GunsmithContainerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItem ItemPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PersistentContainerIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FQuickLootOrder> QuickLootOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SupportedMagContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemsPreset* ItemsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReplicate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainContainer> MainContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMainContainerArray RepMainContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedContainerSettingsCopy> ReplicatedContainerSettingsCopies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickSlotItem> QuickSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickUpContainerItem, meta=(AllowPrivateAccess=true))
    FPickUpContainerItem PickUpContainerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickUpState, meta=(AllowPrivateAccess=true))
    FPickUpContainerState PickupState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_PickUpOwner, meta=(AllowPrivateAccess=true))
    UInventoryComponent* PickUpOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* InventoryStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MainContainerUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* InventoryWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryEnhancedUISettings* UISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEquipped OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemUnEquipped OnItemUnEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAdded OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemoved OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemReserveRequestResponse OnItemReserveRequestResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropped OnItemDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPickedUp OnItemPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAddedFromOtherComp OnItemAddedFromOtherComp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemovedToOtherComp OnItemRemovedToOtherComp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStorageContainerUpdated OnStorageContainerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyChanged OnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeightChanged OnWeightChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickupItemUpdated OnPickupItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickupStateUpdated OnPickupStateUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickupOwnerUpdated OnPickupOwnerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUpdated OnInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickSlotsUpdated OnQuickSlotsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwapDeclineReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* PendingSwapAOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* PendingSwapBOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContainerItem PendingSwapItemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContainerItem PendingSwapItemB;
    
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ValidateRequestedItem(FContainerItem ToValidateItem, bool bIgnorePending);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpgradeSubStorageContainer(FGuid MainContainerUID, int32 NewTier);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeight();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRequiredReferences(const FContainerItem& ContainerItem, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void UpdateQuickSlot(int32 Index, FContainerItem Item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdatePickUpOwner(UInventoryComponent* OwningComp);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParentItems(FMainContainer& MainContainer);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateItemStack(FContainerItem ContainerItem, int32 NewStackCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrency();
    
    UFUNCTION(BlueprintCallable)
    void TryUpdateItem(UInventoryComponent* ItemOwnerComp, FContainerItem UpdatedItem, const FString& Payload, bool bForceUpdateParentItems);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnEquipItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem, bool bSupportStash);
    
    UFUNCTION(BlueprintCallable)
    void TrySwapItem(UInventoryComponent* ItemAOwner, UInventoryComponent* ItemBOwner, FContainerItem ItemA, FContainerItem ItemB, bool bARotated);
    
    UFUNCTION(BlueprintCallable)
    void TryStackItem(UInventoryComponent* RootComp, UInventoryComponent* TargetComp, FContainerItem RootItem, FContainerItem ToAddItem, int32 StackAmount);
    
    UFUNCTION(BlueprintCallable)
    void TrySplitItemByAmount(UInventoryComponent* TargetComp, FContainerItem ToSplitItem, int32 SplitAmount);
    
    UFUNCTION(BlueprintCallable)
    void TrySplitItem(UInventoryComponent* TargetComp, FContainerItem ToSplitItem);
    
    UFUNCTION(BlueprintCallable)
    bool TrySortContainers(TArray<FGuid> UIDs);
    
    UFUNCTION(BlueprintCallable)
    void TryReserveItem(FContainerItem ToReserveItem, FGuid RequestUID);
    
    UFUNCTION(BlueprintCallable)
    bool TryReplaceItem(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetOwnerComp, FContainerItem ContainerItem, UIRRItemDefinition* ToReplaceItemDef, EReplaceErrorType& OutFailureReason, FGuid ToMainContainerUID, int32 ToContainerIndex, int32 ToSlotIndex, bool bRotated);
    
    UFUNCTION(BlueprintCallable)
    static bool TryRemoveVitalPartsListItem(TArray<FGameplayTagContainer>& VitalPartsList, FGameplayTag AttachmentTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryQuickLoot(UItemWidget* ItemRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryMoveItem(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetComp, FContainerItem Item, FGuid NewMainContainerUID, int32 NewContainerIndex, int32 NewSlotIndex, bool bIsRotated, UIRRItemDefinition* ReplaceWith);
    
    UFUNCTION(BlueprintCallable)
    void TryInternalReload(FContainerItem Bullets, FGuid NewMainContainerUID);
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void TryDropItem(UInventoryComponent* TargetComp, FContainerItem ToDropItem, int32 Count, bool bDropInPlace, bool bForceDrop);
    
    UFUNCTION(BlueprintCallable)
    void TryDiscardItem(UInventoryComponent* TargetComp, FContainerItem ToDiscardItem);
    
    UFUNCTION(BlueprintCallable)
    bool TryDisassembleItems(UInventoryComponent* TargetInventory, TArray<FContainerItem> DisassembleItems);
    
    UFUNCTION(BlueprintCallable)
    void TryConsumeItem(UInventoryComponent* TargetComp, FContainerItem ToConsumeItem, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool TryAddItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem, bool& bStacked);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ToggleShouldReplicate(bool bNewShouldReplicate, UInventoryComponent* TargetComp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ToggleInfiniteAmmunition(bool bNewInfiniteAmmunition);
    
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* SpawnItem(TSubclassOf<AActor> Class, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void ShrinkMainContainer(int32 MainContainerIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInfiniteAmmunition(bool bNewInfiniteAmmunition);
    
    UFUNCTION(BlueprintCallable)
    bool ResolveDestinationForm(UIRRItemDefinition* CurrentForm, const FMainContainer& Dest, int32 DestContainerIndex, UIRRItemDefinition* RequestedForm, UIRRItemDefinition*& OutForm);
    
    UFUNCTION(BlueprintCallable)
    void ResetInventoryWidget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ResetInventory();
    
    UFUNCTION(BlueprintCallable)
    void ResetContainerSlots(FMainContainer& MainContainer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUpdateItem(UInventoryComponent* ItemOwnerComp, FContainerItem UpdatedItem, const FString& Payload, bool bForceUpdateParentItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwapItem(UInventoryComponent* ItemAOwner, UInventoryComponent* ItemBOwner, FContainerItem ItemA, FContainerItem ItemB, bool bARotated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStackItem(UInventoryComponent* RootComp, UInventoryComponent* TargetComp, FContainerItem RootItem, FContainerItem ToAddItem, int32 StackAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSplitItemByAmount(UInventoryComponent* TargetComp, FContainerItem ToSplitItem, int32 SplitAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSplitItem(UInventoryComponent* TargetComp, FContainerItem ToSplitItem);
    
    UFUNCTION(BlueprintCallable)
    void RequestSaveInventory(const FString& SaveGameSlot, const TArray<int32> ContainerIndexes, bool bSaveAllContainers);
    
    UFUNCTION(BlueprintCallable)
    void RequestResetInventory();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestReserverItem_Response(FGuid RequestUID, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReserverItem(FContainerItem ToConsumeItem, FGuid RequestUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReplaceItem(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetOwnerComp, FContainerItem ContainerItem, UIRRItemDefinition* ToReplaceItemDef, FGuid ToMainContainerUID, int32 ToContainerIndex, int32 ToSlotIndex, bool bRotated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItem(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetComp, FContainerItem Item, FGuid NewMainContainerUID, int32 NewContainerIndex, int32 NewSlotIndex, bool bIsRotated, bool bValidate, UIRRItemDefinition* ReplaceWith);
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadLendLoadout();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadInventory(const FString& SaveGameSlot, const TArray<int32> ContainerIndexes, bool bLoadAllContainers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestInternalReload(FContainerItem Bullets, FGuid NewMainContainerUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDropItem(UInventoryComponent* TargetComp, FContainerItem ToDropItem, int32 Count, bool bDropInPlace, bool bForceDrop);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDiscardItem(UInventoryComponent* TargetComp, FContainerItem ToDiscardItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConsumeItem(UInventoryComponent* TargetComp, FContainerItem ToConsumeItem, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveItemByTag(FGameplayTag Item, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(FContainerItem Item, bool bRemoveMainContainers, bool bDestroyActor);
    
    UFUNCTION(BlueprintCallable)
    void RefillMag(FContainerItem Mag);
    
    UFUNCTION(BlueprintCallable)
    void RebuildContainerElements(FMainContainer& MainContainer, TArray<UInventoryContainerSettings*> ItemContainers);
    
    UFUNCTION(BlueprintCallable)
    void PrintMainContainers(TArray<FMainContainer> InMainContainers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnWeaponFired(FContainerItem Weapon, bool bAutoChamber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnWeaponChamberedManually(FContainerItem Weapon, FContainerItem Bullets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnWeaponChambered(FContainerItem Weapon);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnStorageContainerUpdated_MC(FMainContainer MainContainer, int32 ContainerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickUpState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickUpOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickUpContainerItem();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MainContainers();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnPickupSwap(AActor* PickUpActor, FGameplayTag EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnPickupInteractionExecuted(AActor* PickUpActor, EItemInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable)
    void OccupyContainerSlots(UPARAM(Ref) FContainerElement& ContainerElement, TArray<int32> SlotIndexes, FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FContainerItem MakeReplacedItemPreview(const FContainerItem& Item, UIRRItemDefinition* NewForm, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void LoadMainContainers(TArray<FMainContainer> NewMainContainers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadLendLoadout(const TArray<FIRRLoyaltyByFaction>& LoyaltyData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadInventory(const TArray<FGuid>& SavedMainContainerUIDs, const TArray<FMainContainer>& SavedMainContainers, const TArray<int32>& ContainerIndexes, bool bLoadAllContainers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPickupSwap(AActor* PickUpActor, FGameplayTag EquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    void ItemsUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidPickup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReplacementDefinitionOf(const UIRRItemDefinition* Form, const UIRRItemDefinition* ReplaceWith);
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipTo(const FMainContainer& MainContainer, int32 ContainerIndex, bool bCheckSocket);
    
    UFUNCTION(BlueprintCallable)
    bool IsDragAllowed(FContainerItem ContainerItem, FString& NewErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    bool IsContainerSupportingItem(const FMainContainer& MainContainer, int32 ContainerIndex, const FContainerItem& ToAddItem);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMainContainers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void InitializeInventory();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTagContainerTagContainerList(TArray<FGameplayTagContainer> List, FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    static bool HasTagContainerListTag(const TArray<FGameplayTagContainer>& List, FGameplayTag AttachmentTag);
    
    UFUNCTION(BlueprintCallable)
    bool HasNestedVitalParts(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllVitalPartsInstalled(FContainerItem& ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponFired(FContainerItem Weapon, bool bAutoChamber);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponChamberedManually(FContainerItem Weapon, FContainerItem Bullets);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponChambered(FContainerItem Weapon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HandleItemUpdated(FContainerItem Item, const FString& Payload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HandleItemPickUpState_Server(FContainerItem Item, EPickupState NewPickupState);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPickUpState(FContainerItem Item, EPickupState NewPickupState, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void HandleInventoryUpdated();
    
    UFUNCTION(BlueprintCallable)
    float GetWeightMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetWeight();
    
    UFUNCTION(BlueprintCallable)
    FGuid GetUIDByActorRef(AActor* ActorRef);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalItemCount(FGameplayTag Item);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSupportedContainerIndex(FMainContainer MainContainer, FContainerItem ToAddItem);
    
    UFUNCTION(BlueprintCallable)
    FMainContainer GetRootMainContainer(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    FString GetRootContainerName(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetRootContainerItem(FContainerItem ContainerItem, bool bOnlyEquipped);
    
    UFUNCTION(BlueprintCallable)
    FMainContainer GetRootContainer(FGuid MainContainerUID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTagContainer> GetRequiredVitalPartsList(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void GetReloadData(FContainerItem Weapon, FReloadData& ReloadData, bool& bForceEmergencyReload);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMotherContainerIndexByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    FMainContainer GetMotherContainerByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMainContainerIndexByUID(FGuid MainContainerUID);
    
    UFUNCTION(BlueprintCallable)
    FMainContainer GetMainContainerByUID(FGuid MainContainerUID);
    
    UFUNCTION(BlueprintCallable)
    bool GetMagBulletStack(const FContainerItem& Weapon, TArray<FContainerItem>& OutBulletStacks);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemContainerIndexByTag(FContainerItem Item, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetItemByEquipmentSlot(FGameplayTag EquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetInventoryWidget(bool bBuild);
    
    UFUNCTION(BlueprintCallable)
    bool GetInfiniteAmmunition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFreeSlotIndex(const FContainerElement& ContainerElement, const FContainerItem& ContainerItem, const TArray<int32>& ToIgnoreIndexes, bool bTryRotated, bool& bFinalRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEvenSplitAmount(int32 StackCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetDefaultContainerItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetDefaultContainerIndexes();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDefaultContainerIndex(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetContainerSlotIndexes(const FContainerElement& ContainerElement, int32 SlotIndex, FVector2D ItemSize);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetContainerItemsByTags(FGameplayTagContainer TagContainer, TArray<int32> MainContainerIndexes, bool bAllContainers, bool bDeepSearch);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetContainerItems(FGuid ContainerUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetContainerItemCount(const FMainContainer& MainContainer, int32 ContainerIndex);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetContainerItemByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetContainerItemByQuickSlotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetContainerHostingIndexes(const FContainerElement& ContainerElement, FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    bool GetContainerCapacity(FMainContainer MainContainer, int32 ContainerIndex, int32& Capacity, int32& MaxCapacity);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDefaultAttachment> GetChildDefaultAttachments(const TArray<FDefaultAttachment>& DefaultAttachments, int32 RootIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetAttachmentsByTags(FContainerItem ParentItem, FGameplayTagContainer TagContainer, bool bDeepSearch);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetAllQuestItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMainContainer> GetAllMainContainersByUID(FGuid UID, bool bIncludeRoot);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllCompatibleItems(FContainerItem ContainerItem, bool bUseWidgets);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllChildActors(FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetAllAttachments(FGuid UID, bool bRecursive, bool bOnlyEquipped);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorByUID(FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    void FreeContainerSlots(UPARAM(Ref) FContainerElement& ContainerElement, TArray<int32> SlotIndexes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FinishSwapWeapons(const TArray<FMainContainer>& UpdatedMainContainers, FGameplayTag EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRItemDefinition* FindReplacementDefinition(const UIRRItemDefinition* Form, bool bEquipOnly);
    
    UFUNCTION(BlueprintCallable)
    bool FindNextBulletInMagazine(const FContainerItem& Weapon, FContainerItem& OutBulletStack);
    
    UFUNCTION(BlueprintCallable)
    void FindMainContainerByUID(FGuid ContainerUID, FMainContainer& MainContainerRef);
    
    UFUNCTION(BlueprintCallable)
    bool FindItemsByTagContainer(FGameplayTagContainer Items, TArray<int32> ContainerIndexes, TArray<FContainerItem>& FoundItems);
    
    UFUNCTION(BlueprintCallable)
    FContainerItem FindItemByTag(FGameplayTag Item, TArray<int32> ContainerIndexes, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    bool FindEquipmentSlotByUID(FGuid MainContainerUID, FGameplayTag& EquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    bool FindCurrentStatItem(TArray<FCurrentStatItem> StatItems, FGameplayTag StatTag, FCurrentStatItem& OutStatItem);
    
    UFUNCTION(BlueprintCallable)
    bool FindChamberedBullet(const FContainerItem& Weapon, FContainerItem& OutBulletStack);
    
    UFUNCTION(BlueprintCallable)
    bool FindBaseStatItem(const TArray<FBaseStatItem>& StatItems, FGameplayTag StatTag, FBaseStatItem& OutStatItem);
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> FindAllItemsByTag(FGameplayTag Item, TArray<int32> ContainerIndexes);
    
    UFUNCTION(BlueprintCallable)
    void FilterSupportedItems(const FContainerItem& Item, UPARAM(Ref) FGameplayTagContainer& SupportedItems);
    
    UFUNCTION(BlueprintCallable)
    void ExecutePendingItemSwap();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCurrentStatItem> ComputeProvisionalItemStats(FContainerItem ContainerItem, TArray<FContainerItem> Attachments);
    
    UFUNCTION(BlueprintCallable)
    void ComputeItemStats(UPARAM(Ref) FContainerItem& ContainerItem, const TArray<FContainerItem>& Attachments);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCurrentStatItem> ComputeDefaultStats(const TArray<FBaseStatItem>& BaseStats);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClearMainContainersByIndexes(const TArray<int32>& ContainerIndexes);
    
    UFUNCTION(BlueprintCallable)
    void ClearContainers();
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemRelations(const FMainContainer& MainContainer, const FContainerItem& ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanSwapWeapons(FContainerItem NewWeapon);
    
    UFUNCTION(BlueprintCallable)
    bool CanSwapItems(UInventoryComponent* ItemAOwner, FContainerItem ItemA, UInventoryComponent* ItemBOwner, FContainerItem ItemB, bool bARotated, int32& OutBSlotIndex, bool& bOutBRotated, bool bIgnorePending);
    
    UFUNCTION(BlueprintCallable)
    bool CanStackItem(FContainerItem& RootItem, FContainerItem ToAddItem, int32& StackAmount);
    
    UFUNCTION(BlueprintCallable)
    bool CanSplitItemByAmount(FContainerItem ToSplitItem, int32 SplitAmount);
    
    UFUNCTION(BlueprintCallable)
    bool CanSplitItem(FContainerItem ToSplitItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReleaseItem(const FContainerItem& Item) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAddVendorItems(TArray<FDefaultItem> Items, bool bDescendIntoStorage);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddToInventory(FContainerItem NewItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddToEquipContainer(FMainContainer& MainContainer, FContainerItem& ContainerItem, int32& OutContainerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddMissionRewards(FGuid RewardContainerUID, UInventoryComponent* MissionRewardOwner);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItemToSlots(const FContainerElement& ContainerElement, const TArray<int32>& SlotIndexes, const TArray<int32>& ToIgnoreIndexes);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItemToMainContainer(UPARAM(Ref) FMainContainer& MainContainer, UPARAM(Ref) FContainerItem& ContainerItem, bool bAddToDescendants, bool bTryRotated, bool bIgnoreVitalParts, int32& OutContainerIndex, int32& OutSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddBulkItems(TArray<FContainerItem> Items);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAcceptItem(const FContainerItem& Item) const;
    
    UFUNCTION(BlueprintCallable)
    int32 BuildVendorMainContainer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BuildStashContainers();
    
    UFUNCTION(BlueprintCallable)
    int32 BuildRewardItemsMainContainer(FGuid ContainerUID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BuildMainContainers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuildInventoryWidget();
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerElement> BuildContainerElements(TArray<UInventoryContainerSettings*> ItemContainers);
    
    UFUNCTION(BlueprintCallable)
    void AttachItem(const FContainerItem& Item, AActor* Owner, FName AttachmentSocket);
    
    UFUNCTION(BlueprintCallable)
    void AddVendorItems(TArray<FDefaultItem> Items, bool bAddToDescendants, bool bDescendIntoStorage);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionRewards(FGuid RewardContainerUID, UInventoryComponent* MissionRewardOwner);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemToSlot(const FMainContainer& MainContainer, FContainerItem Item, int32 ContainerIndex, int32 SlotIndex, bool bRotated);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultItemContainer(const FDefaultItemsContainer& DefaultContainer);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddDefaultItem(const FDefaultItem& DefaultItem, int32 MainContainerIndex, int32 InContainerIndex, int32 InSlotIndex, bool bRotated, FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultAttachments(const FContainerItem& ParentContainerItem, const FGameplayTagContainer& ParentChildSupportedItems, const TArray<FDefaultAttachment>& DefaultAttachments, int32 DefaultAttachmentIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddBulkItems(TArray<FContainerItem> Items, UInventoryComponent* OwnerComponent);
    
};

