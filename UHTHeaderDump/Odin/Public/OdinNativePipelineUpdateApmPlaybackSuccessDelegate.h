#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineUpdateApmPlaybackSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineUpdateApmPlaybackSuccess, uint32, effect_id, uint32, samples_count);

