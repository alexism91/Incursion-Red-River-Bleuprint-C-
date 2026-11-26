#pragma once
#include "CoreMinimal.h"
#include "OnButtonDisabledDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonDisabled, UIRRBaseButtonWidget*, ButtonRef);

