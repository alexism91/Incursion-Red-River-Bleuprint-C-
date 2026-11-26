#pragma once
#include "CoreMinimal.h"
#include "OnGunsmithPresetAcceptStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGunsmithPresetAcceptStateChanged, bool, bCanAccept, const FText&, reason);

