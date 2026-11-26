#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeTokenGeneratorCreateErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorCreateError, EOdinError, ErrorCode);

