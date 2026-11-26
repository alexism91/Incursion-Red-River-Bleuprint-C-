#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
#include "EScriptableToolMouseButton.h"
#include "ScriptableToolModifierStates.h"
#include "OnClickDragDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnClickDragDelegate, FInputDeviceRay, DragPos, FScriptableToolModifierStates, Modifiers, EScriptableToolMouseButton, MouseButton);

