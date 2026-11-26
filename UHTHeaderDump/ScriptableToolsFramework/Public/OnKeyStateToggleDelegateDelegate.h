#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ScriptableToolModifierStates.h"
#include "OnKeyStateToggleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnKeyStateToggleDelegate, FKey, Key, FScriptableToolModifierStates, Modifiers);

