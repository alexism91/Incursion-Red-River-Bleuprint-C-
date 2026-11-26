#pragma once
#include "CoreMinimal.h"
#include "ToolFNamePropertyModifiedDelegateDelegate.generated.h"

class UScriptableInteractiveToolPropertySet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FToolFNamePropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName, FName, NewValue);

