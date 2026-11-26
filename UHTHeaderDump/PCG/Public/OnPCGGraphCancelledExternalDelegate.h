#pragma once
#include "CoreMinimal.h"
#include "OnPCGGraphCancelledExternalDelegate.generated.h"

class UPCGComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPCGGraphCancelledExternal, UPCGComponent*, PCGComponent);

