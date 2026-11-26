#pragma once
#include "CoreMinimal.h"
#include "EOdinEffectType.h"
#include "OdinNativePipelineGetEffectTypeSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineGetEffectTypeSuccess, uint32, effect_id, EOdinEffectType, EffectType);

