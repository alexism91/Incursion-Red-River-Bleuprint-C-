#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemDroppedDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDropped, FContainerItem, Item);

