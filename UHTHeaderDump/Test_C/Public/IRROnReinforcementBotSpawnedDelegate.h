#pragma once
#include "CoreMinimal.h"
#include "IRROnReinforcementBotSpawnedDelegate.generated.h"

class AIRRAIBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnReinforcementBotSpawned, int32, RequestID, AIRRAIBaseCharacter*, Bot);

