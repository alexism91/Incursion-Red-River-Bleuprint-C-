#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemRemovedToOtherCompDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemRemovedToOtherComp, FContainerItem, Item, UInventoryComponent*, OtherComp);

