#pragma once
#include "CoreMinimal.h"
#include "OnActorHiddenUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorHiddenUpdated, bool, Hidden);

