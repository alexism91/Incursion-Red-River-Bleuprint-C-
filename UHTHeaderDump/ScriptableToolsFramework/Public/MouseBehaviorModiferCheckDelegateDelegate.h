#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceState -FallbackName=InputDeviceState
#include "MouseBehaviorModiferCheckDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FMouseBehaviorModiferCheckDelegate, const FInputDeviceState&, InputDeviceState);

