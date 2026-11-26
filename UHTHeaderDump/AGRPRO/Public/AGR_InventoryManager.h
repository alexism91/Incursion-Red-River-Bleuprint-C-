#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnItemUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "AGR_InventoryManager.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AGRPRO_API UAGR_InventoryManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* InventoryStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemUpdated OnItemUpdated;
    
    UAGR_InventoryManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveItemsOfClass(const TSubclassOf<AActor> Class, const int32 Quantity, FText& OutNote);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OverwriteId(const FGuid InInventoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExactItem(AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    bool HasEnoughItems(const TSubclassOf<AActor> Item, const int32 Quantity, FText& OutNote);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllItemsOfTagSlotType(const FGameplayTag SlotTypeFilter, TArray<AActor*>& OutItemsWithTag);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllItemsOfClass(const TSubclassOf<AActor> Class, TArray<AActor*>& OutFilteredArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllItems();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddItemToInventoryDirectly(AActor* Item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddItemsOfClass(const TSubclassOf<AActor> Class, const int32 Quantity, FText& OutNote);
    
};

