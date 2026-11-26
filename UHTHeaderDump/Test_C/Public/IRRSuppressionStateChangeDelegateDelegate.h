#pragma once
#include "CoreMinimal.h"
#include "IRRSuppressionData.h"
#include "IRRSuppressionStateChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRSuppressionStateChangeDelegate, AActor*, Owner, const FIRRSuppressionData&, SuppressionData);

