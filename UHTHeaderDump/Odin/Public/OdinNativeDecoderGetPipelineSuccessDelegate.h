#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderGetPipelineSuccessDelegate.generated.h"

class UOdinPipeline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderGetPipelineSuccess, const UOdinPipeline*, pipeline);

