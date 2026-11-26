#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedDelegate.generated.h"

class UIRRHierarchyListItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAdded, UIRRHierarchyListItemWidget*, ItemRef);

