#pragma once
#include "CoreMinimal.h"
#include "OnSplitStackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSplitStack, AActor*, NewItem);

