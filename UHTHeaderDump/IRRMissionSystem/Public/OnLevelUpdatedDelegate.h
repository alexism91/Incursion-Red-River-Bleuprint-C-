#pragma once
#include "CoreMinimal.h"
#include "OnLevelUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelUpdated, int32, OutLevel);

