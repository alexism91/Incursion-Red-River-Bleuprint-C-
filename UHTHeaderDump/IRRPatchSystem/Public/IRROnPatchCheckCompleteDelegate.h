#pragma once
#include "CoreMinimal.h"
#include "IRROnPatchCheckCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnPatchCheckComplete, bool, bAppliedWipes, bool, bHasNotesToShow);

