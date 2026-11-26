#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativePipelineUpdateApmPlaybackErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativePipelineUpdateApmPlaybackError, EOdinError, ErrorCode);

