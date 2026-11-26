#pragma once
#include "CoreMinimal.h"
#include "OnPickupOwnerUpdatedDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickupOwnerUpdated, UInventoryComponent*, NewOwner);

