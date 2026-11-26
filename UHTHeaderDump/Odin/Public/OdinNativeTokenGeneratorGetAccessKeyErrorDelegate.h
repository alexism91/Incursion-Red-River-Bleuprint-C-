#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeTokenGeneratorGetAccessKeyErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorGetAccessKeyError, EOdinError, ErrorCode);

