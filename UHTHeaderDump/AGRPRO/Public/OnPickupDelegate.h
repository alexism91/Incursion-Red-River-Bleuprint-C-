#pragma once
#include "CoreMinimal.h"
#include "OnPickupDelegate.generated.h"

class UAGR_InventoryManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickup, UAGR_InventoryManager*, Inventory);

