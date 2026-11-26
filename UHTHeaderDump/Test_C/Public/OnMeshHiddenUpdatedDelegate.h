#pragma once
#include "CoreMinimal.h"
#include "OnMeshHiddenUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshHiddenUpdated, bool, Hidden, bool, bHiddenShadows);

