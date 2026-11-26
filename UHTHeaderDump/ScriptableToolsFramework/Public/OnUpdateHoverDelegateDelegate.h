#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
#include "ScriptableToolModifierStates.h"
#include "OnUpdateHoverDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FOnUpdateHoverDelegate, FInputDeviceRay, CurrentPos, FScriptableToolModifierStates, Modifiers);

