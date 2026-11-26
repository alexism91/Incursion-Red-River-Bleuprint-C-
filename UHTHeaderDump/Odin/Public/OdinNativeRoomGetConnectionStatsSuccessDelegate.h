#pragma once
#include "CoreMinimal.h"
#include "OdinConnectionStats.h"
#include "OdinNativeRoomGetConnectionStatsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomGetConnectionStatsSuccess, FOdinConnectionStats, stats);

