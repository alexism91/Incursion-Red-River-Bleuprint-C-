#pragma once
#include "CoreMinimal.h"
#include "OnKeypadCodeEnteredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeypadCodeEntered, bool, bAccepted, AActor*, Instigator);

