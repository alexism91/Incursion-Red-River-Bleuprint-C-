#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionEventPayload.h"
#include "OnMissionEventReceivedDelegate.generated.h"

class AActor;
class UIRRTargetData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMissionEventReceived, FGameplayTag, MessageTag, UIRRTargetData*, TargetData, FIRRMissionEventPayload, Payload, AActor*, Receiver);

