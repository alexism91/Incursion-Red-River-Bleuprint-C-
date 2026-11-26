#pragma once
#include "CoreMinimal.h"
#include "OnItemClickedDelegate.generated.h"

class UItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClicked, UItemWidget*, ItemRef);

