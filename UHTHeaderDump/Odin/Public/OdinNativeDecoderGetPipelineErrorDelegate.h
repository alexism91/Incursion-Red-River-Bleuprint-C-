#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderGetPipelineErrorDelegate.generated.h"

class UOdinDecoder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderGetPipelineError, UOdinDecoder*, decoder);

