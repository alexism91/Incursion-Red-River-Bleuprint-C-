#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineMoveEffectSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineMoveEffectSuccess, uint32, effectId, uint32, newIndex);

