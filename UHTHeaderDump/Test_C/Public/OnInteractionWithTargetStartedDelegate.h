#pragma once
#include "CoreMinimal.h"
#include "OnInteractionWithTargetStartedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionWithTargetStarted, AActor*, Target, AActor*, Interactor);

