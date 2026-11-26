#pragma once
#include "CoreMinimal.h"
#include "EAirdropState.h"
#include "AirdropStateChangedEventDelegate.generated.h"

class AAirdrop;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAirdropStateChangedEvent, AAirdrop*, Airdrop, EAirdropState, OldState, EAirdropState, NewState);

