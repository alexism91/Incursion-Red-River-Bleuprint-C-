#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativePipelineGetVadConfigErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativePipelineGetVadConfigError, EOdinError, ErrorCode);

