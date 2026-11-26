#pragma once
#include "CoreMinimal.h"
#include "EKronosUserAuthCompleteResult.h"
#include "OnKronosUserAuthCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKronosUserAuthComplete, EKronosUserAuthCompleteResult, Result, bool, bWasInitialAuth, const FText&, ErrorText);

