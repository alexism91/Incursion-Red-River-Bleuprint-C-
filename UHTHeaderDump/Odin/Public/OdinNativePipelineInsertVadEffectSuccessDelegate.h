#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineInsertVadEffectSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineInsertVadEffectSuccess, uint32, Index, uint32, effectId);

