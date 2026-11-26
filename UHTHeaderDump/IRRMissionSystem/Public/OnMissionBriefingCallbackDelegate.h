#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
#include "OnMissionBriefingCallbackDelegate.generated.h"

class UAkCallbackInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionBriefingCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);

