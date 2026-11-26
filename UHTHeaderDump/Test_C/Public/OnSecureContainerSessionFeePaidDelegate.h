#pragma once
#include "CoreMinimal.h"
#include "OnSecureContainerSessionFeePaidDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecureContainerSessionFeePaid, bool, bFeePaid);

