#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineGetEffectIndexSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineGetEffectIndexSuccess, uint32, effectId, uint32, Index);

