#pragma once
#include "CoreMinimal.h"
#include "AdvancedSightComponentDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdvancedSightComponentDelegate, AActor*, TargetActor);

