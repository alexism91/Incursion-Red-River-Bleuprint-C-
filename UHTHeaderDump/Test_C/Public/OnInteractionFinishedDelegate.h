#pragma once
#include "CoreMinimal.h"
#include "EInteractionFinishedMode.h"
#include "OnInteractionFinishedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionFinished, AActor*, InteractingActor, EInteractionFinishedMode, InteractionFinishedMode);

