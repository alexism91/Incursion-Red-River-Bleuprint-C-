#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnItemHoveredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemHovered, FContainerItem, HoveredItem, bool, bStart);

