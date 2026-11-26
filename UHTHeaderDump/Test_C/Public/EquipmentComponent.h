#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ContainerItem.h"
#include "EIRRSwapPhase.h"
#include "EquipmentData.h"
#include "EquipmentSlot.h"
#include "IRRUsageItemInfo.h"
#include "OnEquipmentSlotChangedDelegate.h"
#include "OnEquipmentUpdatedDelegate.h"
#include "OnEquippableChangedDelegate.h"
#include "OnSwapFinishedDelegate.h"
#include "PickUpContainerItem.h"
#include "Templates/SubclassOf.h"
#include "EquipmentComponent.generated.h"

class ACharacter;
class AInteractionItemActor;
class APickUpActor;
class UAsyncAction_PlayMontage;
class UInventoryComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UEquipmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<APickUpActor>> DefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentSlot> EquipmentSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquipmentData, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentData> RepEquipmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentData> LocEquipmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentData> DefaultEquipmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedItem, meta=(AllowPrivateAccess=true))
    FEquipmentData RepEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentData LocEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FContainerItem> ProvisionalItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ToEquipGadgetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreviousSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FContainerItem InteractionItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInteractionItemActor* SpawnedInteractionItemActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwapFinished OnSwapFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentSlotChanged OnEquipmentSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippableChanged OnEquippableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentUpdated OnEquipmentUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentData HolsterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentData SpentHeldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* SwapMontage;
    
public:
    UEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateEquippedItem(FEquipmentData NewEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEquipmentSlotItemVisibility(FContainerItem Item, bool bNewHidden, bool bHideMesh);
    
    UFUNCTION(BlueprintCallable)
    void UpdatedEquipment(FContainerItem Item, FGameplayTag Slot, bool bEquipped);
    
    UFUNCTION(BlueprintCallable)
    void TryUnEquipProvisionalItemFromSlot(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnEquipItem();
    
    UFUNCTION(BlueprintCallable)
    void TryUnEquipInteractionItem();
    
    UFUNCTION(BlueprintCallable)
    bool TrySetInteractionItem(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipProvisionalItemToSlot(FContainerItem Item, FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipItem(FEquipmentData NewEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipInteractionItem(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPerspective(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SpawnInteractionItem(FIRRUsageItemInfo ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItemHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedActorsHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnEquipProvisionalItem(FContainerItem Item, FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnEquipInteractionItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEquipProvisionalItemToSlot(FContainerItem Item, FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEquipInteractionItem(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseHandsLock(UObject* Holder);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnUnEquipped(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedItem();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipmentData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHolsterMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnHolsterMontageCompleted(FName NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFallbackItemUpdated(FPickUpContainerItem PickUpContainerItem);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnEquipped(FContainerItem Item, FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentDataInitialized();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnDropped(FContainerItem Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDrawMontageEnded(FName NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkHeldItemSpent();
    
    UFUNCTION(BlueprintCallable)
    void K2_UnEquipSlot(bool bSkipAnimation);
    
    UFUNCTION(BlueprintCallable)
    int32 K2_RequestSwap(FGameplayTag Slot, bool bSkipHolsterAnimation);
    
    UFUNCTION(BlueprintCallable)
    int32 K2_RequestHolster(bool bSkipAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInteractionItemSpawned(AInteractionItemActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInteractionItemDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnHolsterCompleted(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEquipmentDataInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDrawCompleted(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void K2_EquipSlot(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwapQueued(bool bIncludeAutomatic) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSwapTargetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRSwapPhase GetSwapPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastHeldSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetIntendedSlot() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetEquippedSlot();
    
    UFUNCTION(BlueprintCallable)
    FContainerItem GetEquippedItem();
    
    UFUNCTION(BlueprintCallable)
    FEquipmentSlot GetEquipmentSlot(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    FEquipmentData GetEquipmentData(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    void DestroyInteractionItem();
    
    UFUNCTION(BlueprintCallable)
    bool CanSwapToSlot(FGameplayTag Slot);
    
    UFUNCTION(BlueprintCallable)
    void AcquireHandsLock(UObject* Holder);
    
};

