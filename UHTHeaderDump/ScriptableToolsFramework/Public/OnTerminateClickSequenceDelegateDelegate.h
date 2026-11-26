#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolMouseButton.h"
#include "ScriptableToolModifierStates.h"
#include "OnTerminateClickSequenceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerminateClickSequenceDelegate, FScriptableToolModifierStates, Modifiers, EScriptableToolMouseButton, MouseButton);

