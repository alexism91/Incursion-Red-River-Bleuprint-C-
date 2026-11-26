#pragma once
#include "CoreMinimal.h"
#include "OnButtonEnabledDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonEnabled, UIRRBaseButtonWidget*, ButtonRef);

