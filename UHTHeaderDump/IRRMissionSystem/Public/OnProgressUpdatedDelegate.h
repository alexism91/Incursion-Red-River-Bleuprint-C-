#pragma once
#include "CoreMinimal.h"
#include "IRRMissionVariable.h"
#include "OnProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressUpdated, FIRRMissionVariable, NewProgress);

