#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineInsertApmEffectSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineInsertApmEffectSuccess, uint32, Index, uint32, effectId);

