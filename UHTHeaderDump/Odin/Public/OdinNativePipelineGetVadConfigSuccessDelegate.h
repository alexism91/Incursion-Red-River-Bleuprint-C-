#pragma once
#include "CoreMinimal.h"
#include "OdinVadConfig.h"
#include "OdinNativePipelineGetVadConfigSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativePipelineGetVadConfigSuccess, uint32, effect_id, FOdinVadConfig, vadConfig);

