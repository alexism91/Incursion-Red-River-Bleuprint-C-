#pragma once
#include "CoreMinimal.h"
#include "OnAIPresetAcceptStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIPresetAcceptStateChanged, bool, bCanAccept, const FText&, reason);

