#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AirstrikeDetonatedEventDelegate.generated.h"

class AAirstrike;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAirstrikeDetonatedEvent, AAirstrike*, Airstrike, FVector, Location);

