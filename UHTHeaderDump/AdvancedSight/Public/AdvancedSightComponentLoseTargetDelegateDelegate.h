#pragma once
#include "CoreMinimal.h"
#include "AdvancedSightComponentLoseTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAdvancedSightComponentLoseTargetDelegate, AActor*, TargetActor, bool, bWasPerceived);

