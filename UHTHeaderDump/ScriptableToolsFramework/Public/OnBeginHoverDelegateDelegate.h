#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
#include "ScriptableToolModifierStates.h"
#include "OnBeginHoverDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnBeginHoverDelegate, FInputDeviceRay, CurrentPos, FScriptableToolModifierStates, Modifiers);

