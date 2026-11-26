#pragma once
#include "CoreMinimal.h"
#include "ConvoyEventDelegate.generated.h"

class AConvoy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvoyEvent, AConvoy*, Convoy);

