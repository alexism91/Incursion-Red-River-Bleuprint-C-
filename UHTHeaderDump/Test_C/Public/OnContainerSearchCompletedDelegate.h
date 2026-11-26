#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ContainerItem.h"
#include "OnContainerSearchCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnContainerSearchCompleted, FGuid, MainContainerUID, int32, ContainerIndex, FContainerItem, ContainerItem);

