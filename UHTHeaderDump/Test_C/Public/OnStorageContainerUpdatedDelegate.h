#pragma once
#include "CoreMinimal.h"
#include "MainContainer.h"
#include "OnStorageContainerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStorageContainerUpdated, FMainContainer, MainContainer, int32, ContainerIndex);

