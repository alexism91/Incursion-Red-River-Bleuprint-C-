#pragma once
#include "CoreMinimal.h"
#include "OnPawnEnteredZoneDelegate.generated.h"

class AIRRLevelTrigger;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnEnteredZone, AIRRLevelTrigger*, LevelZone, APawn*, Pawn);

