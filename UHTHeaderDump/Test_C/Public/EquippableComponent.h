#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ContainerItem.h"
#include "PickUpContainerItem.h"
#include "Templates/SubclassOf.h"
#include "EquippableComponent.generated.h"

class AActor;
class ACharacter;
class UAnimInstance;
class UCurveFloat;
class UEquippableDataAsset;
class UInventoryComponent;
class USimpleGameplayAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UEquippableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquippableDataAsset* EquippableDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USimpleGameplayAbility>> ToGrantAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ToAddAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ToRemoveAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FErgonomicsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayAbility*> LocGrantAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* LocInventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* OwningInventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocEquipSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* CharacterAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* EquippableAnimInstance;
    
    UEquippableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipItem(bool bWasDropped);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPerspective(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacterAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePickupItem(FContainerItem NewItem, const FString& Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnPotentialItemDropped(FContainerItem DroppedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupOwnerUpdated(UInventoryComponent* NewInventoryComp);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupItemUpdated(FPickUpContainerItem NewPickupContainerItem);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnItemDropped();
    
    UFUNCTION(BlueprintCallable)
    void HandleSeparateFOV(bool bIsEquipped);
    
    UFUNCTION(BlueprintCallable)
    float GetWeightMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetWeight();
    
    UFUNCTION(BlueprintCallable)
    float GetSwayMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetErgonomicsMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetErgonomics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEquippableDataAsset* GetEquippableDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void GetContainerItemAsRef(FContainerItem& OutContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FContainerItem GetContainerItem() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FContainerItem> GetAttachments(bool bIncludeRoot);
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(FGameplayTag Slot, AActor* Owner);
    
};

