#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
#include "EScriptableToolMouseButton.h"
#include "CanBeginClickSequenceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FCanBeginClickSequenceDelegate, FInputDeviceRay, ClickPos, EScriptableToolMouseButton, MouseButton);

