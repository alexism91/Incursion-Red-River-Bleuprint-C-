#pragma once
#include "CoreMinimal.h"
#include "AdvancedSightComponentPerceiveTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAdvancedSightComponentPerceiveTargetDelegate, AActor*, TargetActor, bool, bWasRemembered);

