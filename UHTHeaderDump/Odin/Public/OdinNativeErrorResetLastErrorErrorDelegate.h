#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeErrorResetLastErrorErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeErrorResetLastErrorError, EOdinError, ErrorCode);

