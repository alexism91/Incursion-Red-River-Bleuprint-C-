#pragma once
#include "CoreMinimal.h"
#include "OnMagnificationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMagnificationChanged, float, Magnification);

