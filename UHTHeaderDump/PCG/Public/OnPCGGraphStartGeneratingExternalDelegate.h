#pragma once
#include "CoreMinimal.h"
#include "OnPCGGraphStartGeneratingExternalDelegate.generated.h"

class UPCGComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPCGGraphStartGeneratingExternal, UPCGComponent*, PCGComponent);

