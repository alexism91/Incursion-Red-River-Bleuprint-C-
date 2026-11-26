#pragma once
#include "CoreMinimal.h"
#include "IRRAISenseEvent.h"
#include "IRRAISenseEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAISenseEventDelegate, const FIRRAISenseEvent&, NewEvent);

