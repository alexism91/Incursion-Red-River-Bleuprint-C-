#pragma once
#include "CoreMinimal.h"
#include "PickUpContainerState.h"
#include "OnPickupStateUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickupStateUpdated, FPickUpContainerState, PickupState);

