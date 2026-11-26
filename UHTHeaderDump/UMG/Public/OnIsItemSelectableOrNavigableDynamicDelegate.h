#pragma once
#include "CoreMinimal.h"
#include "OnIsItemSelectableOrNavigableDynamicDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnIsItemSelectableOrNavigableDynamic, UObject*, Item);

