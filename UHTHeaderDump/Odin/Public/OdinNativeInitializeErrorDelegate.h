#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeInitializeErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeInitializeError, EOdinError, ErrorCode);

