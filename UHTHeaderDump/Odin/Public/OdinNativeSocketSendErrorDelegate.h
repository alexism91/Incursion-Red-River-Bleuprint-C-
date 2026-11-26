#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeSocketSendErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketSendError, EOdinError, ErrorCode);

