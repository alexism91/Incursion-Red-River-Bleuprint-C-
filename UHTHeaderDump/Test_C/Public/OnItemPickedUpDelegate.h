#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemPickedUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemPickedUp, FContainerItem, Item);

