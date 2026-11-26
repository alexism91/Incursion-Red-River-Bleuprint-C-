#pragma once
#include "CoreMinimal.h"
#include "OnButtonUnHoveredDelegate.generated.h"

class UIRRBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonUnHovered, UIRRBaseButtonWidget*, ButtonRef);

