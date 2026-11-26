#pragma once
#include "CoreMinimal.h"
#include "EIRRSequenceState.h"
#include "OnSequenceStateUpdatedDelegate.generated.h"

class UIRRMissionSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSequenceStateUpdated, EIRRSequenceState, NewState, UIRRMissionSequence*, Sequence);

