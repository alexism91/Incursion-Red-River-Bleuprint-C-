#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionEventPayload.h"
#include "OnWorldEventReceivedDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWorldEventReceived, FGameplayTag, MessageTag, UIRRMissionData*, Data, FIRRMissionEventPayload, Payload);

