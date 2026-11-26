#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InventoryComponent.h"
#include "OnVicinityLayoutChangedDelegate.h"
#include "PickUpContainerItem.h"
#include "IRRVicinityInventoryComponent.generated.h"

class UInventorySpatialContainerSettings;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRVicinityInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVicinityLayoutChanged OnVicinityLayoutChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventorySpatialContainerSettings* RootContainerSettings;
    
public:
    UIRRVicinityInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScanning(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestRescan();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScanning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLooseLoot(const UInventoryComponent* OwnerComp);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTrackedPickupOwnerUpdated(UInventoryComponent* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void HandleTrackedPickupItemUpdated(FPickUpContainerItem UpdatedPickupItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleTrackedInventoryUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetRootContainerUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColumns() const;
    
};

