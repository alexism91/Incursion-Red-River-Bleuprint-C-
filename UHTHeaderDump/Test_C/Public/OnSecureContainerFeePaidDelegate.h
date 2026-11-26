#pragma once
#include "CoreMinimal.h"
#include "OnSecureContainerFeePaidDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecureContainerFeePaid, bool, bFeePaid);

