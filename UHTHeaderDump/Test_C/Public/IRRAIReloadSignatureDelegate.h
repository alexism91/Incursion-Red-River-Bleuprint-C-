#pragma once
#include "CoreMinimal.h"
#include "IRRAIReloadSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIReloadSignature, const bool, bSuccess);

