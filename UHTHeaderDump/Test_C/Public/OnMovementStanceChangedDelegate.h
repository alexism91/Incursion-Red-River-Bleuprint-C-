#pragma once
#include "CoreMinimal.h"
#include "EIRRMovementStance.h"
#include "OnMovementStanceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStanceChanged, EIRRMovementStance, NewStance);

