#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderGetPipelineSuccessDelegate.generated.h"

class UOdinPipeline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderGetPipelineSuccess, UOdinPipeline*, pipeline);

