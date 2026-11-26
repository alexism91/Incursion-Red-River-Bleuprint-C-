#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativePipelineInsertApmEffectErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativePipelineInsertApmEffectError, EOdinError, ErrorCode);

