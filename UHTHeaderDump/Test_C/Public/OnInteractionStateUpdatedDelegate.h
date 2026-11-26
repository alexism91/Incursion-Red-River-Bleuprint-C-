#pragma once
#include "CoreMinimal.h"
#include "EInteractionState.h"
#include "OnInteractionStateUpdatedDelegate.generated.h"

class UInteractionOption;
class UInteractionTarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteractionStateUpdated, UInteractionTarget*, InteractionTarget, UInteractionOption*, InteractionOption, EInteractionState, InteractionState);

