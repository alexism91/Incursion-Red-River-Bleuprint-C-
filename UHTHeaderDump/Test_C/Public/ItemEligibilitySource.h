#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ContainerItem.h"
#include "ItemEligibilitySource.generated.h"

class UInventoryComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UItemEligibilitySource : public UInterface {
    GENERATED_BODY()
};

class IItemEligibilitySource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemEligible(UInventoryComponent* OwnerComp, const FContainerItem& Item);
    
};

