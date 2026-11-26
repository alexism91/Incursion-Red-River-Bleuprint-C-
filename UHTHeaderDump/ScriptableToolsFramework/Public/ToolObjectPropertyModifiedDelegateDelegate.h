#pragma once
#include "CoreMinimal.h"
#include "ToolObjectPropertyModifiedDelegateDelegate.generated.h"

class UObject;
class UScriptableInteractiveToolPropertySet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FToolObjectPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName, UObject*, NewValue);

