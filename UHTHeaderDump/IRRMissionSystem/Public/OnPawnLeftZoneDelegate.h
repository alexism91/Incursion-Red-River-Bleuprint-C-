#pragma once
#include "CoreMinimal.h"
#include "OnPawnLeftZoneDelegate.generated.h"

class AIRRLevelTrigger;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnLeftZone, AIRRLevelTrigger*, LevelZone, APawn*, Pawn);

