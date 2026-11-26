#pragma once
#include "CoreMinimal.h"
#include "ToolFloatPropertyModifiedDelegateDelegate.generated.h"

class UScriptableInteractiveToolPropertySet;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FToolFloatPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName, double, NewValue);

