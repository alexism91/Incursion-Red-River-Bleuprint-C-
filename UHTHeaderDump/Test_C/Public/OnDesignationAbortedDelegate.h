#pragma once
#include "CoreMinimal.h"
#include "EIRRDesignationAbortReason.h"
#include "OnDesignationAbortedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDesignationAborted, EIRRDesignationAbortReason, reason);

