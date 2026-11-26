#pragma once
#include "CoreMinimal.h"
#include "OnCanInteractUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanInteractUpdated, bool, CanInteract);

