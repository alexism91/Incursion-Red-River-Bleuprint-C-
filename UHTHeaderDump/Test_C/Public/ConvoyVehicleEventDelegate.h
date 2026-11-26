#pragma once
#include "CoreMinimal.h"
#include "ConvoyVehicleEventDelegate.generated.h"

class AActor;
class AConvoy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConvoyVehicleEvent, AConvoy*, Convoy, AActor*, Vehicle);

