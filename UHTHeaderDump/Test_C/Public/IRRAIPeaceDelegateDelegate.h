#pragma once
#include "CoreMinimal.h"
#include "IRRAIPeaceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIPeaceDelegate, const bool, IsAtPeace);

