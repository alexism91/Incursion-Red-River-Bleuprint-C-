#pragma once
#include "CoreMinimal.h"
#include "OnItemRemovedDelegate.generated.h"

class UIRRHierarchyListItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRemoved, UIRRHierarchyListItemWidget*, ItemRef);

