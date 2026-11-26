#pragma once
#include "CoreMinimal.h"
#include "OnButtonSelectedDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonSelected, UIRRBaseButtonWidget*, ButtonRef);

