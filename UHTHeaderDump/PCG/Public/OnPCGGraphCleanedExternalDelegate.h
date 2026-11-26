#pragma once
#include "CoreMinimal.h"
#include "OnPCGGraphCleanedExternalDelegate.generated.h"

class UPCGComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPCGGraphCleanedExternal, UPCGComponent*, PCGComponent);

