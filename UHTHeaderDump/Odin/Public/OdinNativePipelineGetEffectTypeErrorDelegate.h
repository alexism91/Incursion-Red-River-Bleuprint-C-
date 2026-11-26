#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativePipelineGetEffectTypeErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativePipelineGetEffectTypeError, EOdinError, ErrorCode);

