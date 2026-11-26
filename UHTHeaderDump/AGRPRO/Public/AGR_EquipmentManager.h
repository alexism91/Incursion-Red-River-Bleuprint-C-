#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Equipment.h"
#include "AGR_EquipmentManager.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AGRPRO_API UAGR_EquipmentManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FEquipment> EquipmentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> References;
    
    UAGR_EquipmentManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnEquipItemFromSlot(const FName Slot, AActor*& OutItemUnequipped);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnEquipByReference(AActor* ItemActor, FText& OutNote);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupDefineSlots(const TArray<FEquipment> InEquipmentList);
    
    UFUNCTION(BlueprintCallable)
    void SaveShortcutReference(const FName Key, AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShortcutReference(const FName Key, AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemInSlot(const FName Slot, AActor*& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllItems(TArray<AActor*>& OutItems);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EquipItemInSlot(const FName Slot, AActor* ItemActor, AActor*& OutPreviousItem, AActor*& OutNewItem);
    
};

