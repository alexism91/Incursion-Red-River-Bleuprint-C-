#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeSocketCreateErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketCreateError, EOdinError, ErrorCode);

