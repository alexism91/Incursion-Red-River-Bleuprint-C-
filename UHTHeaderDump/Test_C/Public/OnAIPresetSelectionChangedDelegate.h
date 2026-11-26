#pragma once
#include "CoreMinimal.h"
#include "OnAIPresetSelectionChangedDelegate.generated.h"

class UIRRAIPresetListItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIPresetSelectionChanged, UIRRAIPresetListItem*, Item, bool, bCanLoad);

