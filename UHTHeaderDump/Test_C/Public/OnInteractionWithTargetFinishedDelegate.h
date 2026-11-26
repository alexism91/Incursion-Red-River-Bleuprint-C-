#pragma once
#include "CoreMinimal.h"
#include "OnInteractionWithTargetFinishedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteractionWithTargetFinished, AActor*, Target, AActor*, Interactor, bool, bSuccess);

