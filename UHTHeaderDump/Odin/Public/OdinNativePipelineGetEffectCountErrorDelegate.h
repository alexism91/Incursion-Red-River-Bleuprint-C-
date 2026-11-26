#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativePipelineGetEffectCountErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativePipelineGetEffectCountError, EOdinError, ErrorCode);

