#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InventoryInterface.generated.h"

class UInventoryComponent;
class UPickUpComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UInventoryInterface : public UInterface {
    GENERATED_BODY()
};

class IInventoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPickUpComponent* GetPickUpComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInventoryComponent* GetInventoryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPickUp();
    
};

