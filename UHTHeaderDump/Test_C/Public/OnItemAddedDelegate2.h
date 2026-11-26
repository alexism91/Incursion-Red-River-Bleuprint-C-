#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "MainContainer.h"
#include "OnItemAddedDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAdded, FMainContainer, MainContainer, FContainerItem, Item);

