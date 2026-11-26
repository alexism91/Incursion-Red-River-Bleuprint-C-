#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "EItemCompareType.h"
#include "OnItemCompareDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemCompare, FContainerItem, NewContainerItem, EItemCompareType, CompareType, bool, bStart);

