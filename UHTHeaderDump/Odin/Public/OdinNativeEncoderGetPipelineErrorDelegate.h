#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderGetPipelineErrorDelegate.generated.h"

class UOdinEncoder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderGetPipelineError, UOdinEncoder*, encoder);

