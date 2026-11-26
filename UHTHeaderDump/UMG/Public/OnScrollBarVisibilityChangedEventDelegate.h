#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.h"
#include "OnScrollBarVisibilityChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollBarVisibilityChangedEvent, ESlateVisibility, NewVisibility);

