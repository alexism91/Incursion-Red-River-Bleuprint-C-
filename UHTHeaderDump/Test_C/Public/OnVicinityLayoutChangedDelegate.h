#pragma once
#include "CoreMinimal.h"
#include "OnVicinityLayoutChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVicinityLayoutChanged, int32, Columns, int32, Rows);

