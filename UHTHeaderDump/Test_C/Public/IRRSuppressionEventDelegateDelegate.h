#pragma once
#include "CoreMinimal.h"
#include "IRRAISuppressionEventData.h"
#include "IRRSuppressionEventDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRSuppressionEventDelegate, AActor*, Owner, const FIRRAISuppressionEventData&, SuppressionEvent);

