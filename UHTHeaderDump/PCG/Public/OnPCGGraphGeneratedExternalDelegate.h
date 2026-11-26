#pragma once
#include "CoreMinimal.h"
#include "OnPCGGraphGeneratedExternalDelegate.generated.h"

class UPCGComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPCGGraphGeneratedExternal, UPCGComponent*, PCGComponent);

