#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputRayHit -FallbackName=InputRayHit
#include "EScriptableToolMouseButton.h"
#include "TestIfHitByClickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FInputRayHit, FTestIfHitByClickDelegate, FInputDeviceRay, ClickPos, EScriptableToolMouseButton, MouseButton);

