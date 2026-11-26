#pragma once
#include "CoreMinimal.h"
#include "ToolStringPropertyModifiedDelegateDelegate.generated.h"

class UScriptableInteractiveToolPropertySet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FToolStringPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName, const FString&, NewValue);

