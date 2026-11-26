#pragma once
#include "CoreMinimal.h"
#include "PickUpContainerItem.h"
#include "OnPickupItemUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickupItemUpdated, FPickUpContainerItem, PickUpContainerItem);

