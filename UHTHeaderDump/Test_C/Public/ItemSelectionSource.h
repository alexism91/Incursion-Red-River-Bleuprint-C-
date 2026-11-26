#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ContainerItem.h"
#include "ItemSelectionSource.generated.h"

class UInventoryComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UItemSelectionSource : public UInterface {
    GENERATED_BODY()
};

class IItemSelectionSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ToggleItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item);
    
};

