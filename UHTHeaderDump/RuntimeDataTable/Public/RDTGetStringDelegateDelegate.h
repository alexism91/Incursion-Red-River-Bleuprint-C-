#pragma once
#include "CoreMinimal.h"
#include "RuntimeDataTableCallbackInfo.h"
#include "RDTGetStringDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRDTGetStringDelegate, FRuntimeDataTableCallbackInfo, CallbackInfo);

