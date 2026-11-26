#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonClicked, UIRRBaseButtonWidget*, ButtonRef);

