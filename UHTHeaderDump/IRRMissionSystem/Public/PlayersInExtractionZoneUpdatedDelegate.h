#pragma once
#include "CoreMinimal.h"
#include "PlayersInExtractionZoneUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersInExtractionZoneUpdated, int32, Counter);

