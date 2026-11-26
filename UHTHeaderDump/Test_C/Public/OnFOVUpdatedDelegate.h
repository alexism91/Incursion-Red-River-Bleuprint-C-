#pragma once
#include "CoreMinimal.h"
#include "OnFOVUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFOVUpdated, float, NewFOV);

