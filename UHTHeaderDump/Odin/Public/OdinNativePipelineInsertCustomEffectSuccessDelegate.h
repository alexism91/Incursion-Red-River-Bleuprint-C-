#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineInsertCustomEffectSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineInsertCustomEffectSuccess, uint32, Index, uint32, effectId);

