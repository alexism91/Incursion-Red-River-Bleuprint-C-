#pragma once
#include "CoreMinimal.h"
#include "OnButtonHoveredDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonHovered, UIRRBaseButtonWidget*, ButtonRef);

