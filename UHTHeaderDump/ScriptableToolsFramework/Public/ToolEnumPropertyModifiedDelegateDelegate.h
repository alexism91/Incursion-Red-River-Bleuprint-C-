#pragma once
#include "CoreMinimal.h"
#include "ToolEnumPropertyModifiedDelegateDelegate.generated.h"

class UScriptableInteractiveToolPropertySet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FToolEnumPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName, uint8, NewValue);

