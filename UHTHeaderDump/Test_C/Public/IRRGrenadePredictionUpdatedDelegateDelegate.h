#pragma once
#include "CoreMinimal.h"
#include "IRRGrenadePredictionResult.h"
#include "IRRGrenadePredictionUpdatedDelegateDelegate.generated.h"

class AGrenadeActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRGrenadePredictionUpdatedDelegate, AGrenadeActor*, Grenade, const FIRRGrenadePredictionResult&, Prediction);

