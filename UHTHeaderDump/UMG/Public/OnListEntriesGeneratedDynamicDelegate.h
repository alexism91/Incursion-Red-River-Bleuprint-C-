#pragma once
#include "CoreMinimal.h"
#include "OnListEntriesGeneratedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListEntriesGeneratedDynamic, int32, NumEntries);

