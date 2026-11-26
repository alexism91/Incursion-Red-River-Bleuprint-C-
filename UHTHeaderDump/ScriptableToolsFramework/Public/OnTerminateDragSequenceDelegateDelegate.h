#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolMouseButton.h"
#include "ScriptableToolModifierStates.h"
#include "OnTerminateDragSequenceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerminateDragSequenceDelegate, FScriptableToolModifierStates, Modifiers, EScriptableToolMouseButton, MouseButton);

