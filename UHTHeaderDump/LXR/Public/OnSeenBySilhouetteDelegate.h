#pragma once
#include "CoreMinimal.h"
#include "OnSeenBySilhouetteDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSeenBySilhouette, AActor*, Detector);

