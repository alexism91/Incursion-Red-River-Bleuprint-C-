#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemDragDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDrag, FContainerItem, DraggedItem, bool, bStart);

