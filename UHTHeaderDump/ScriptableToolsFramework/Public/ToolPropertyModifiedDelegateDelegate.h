#pragma once
#include "CoreMinimal.h"
#include "ToolPropertyModifiedDelegateDelegate.generated.h"

class UScriptableInteractiveToolPropertySet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FToolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet*, PropertySet, const FString&, PropertyName);

