#pragma once
#include "CoreMinimal.h"
#include "OnButtonDeselectedDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonDeselected, UIRRBaseButtonWidget*, ButtonRef);

