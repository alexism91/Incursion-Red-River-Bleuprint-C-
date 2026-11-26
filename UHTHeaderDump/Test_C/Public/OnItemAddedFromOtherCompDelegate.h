#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemAddedFromOtherCompDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAddedFromOtherComp, FContainerItem, Item, UInventoryComponent*, OtherComp);

