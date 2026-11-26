#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "MainContainer.h"
#include "OnItemRemovedDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemRemoved, FMainContainer, MainContainer, FContainerItem, Item);

