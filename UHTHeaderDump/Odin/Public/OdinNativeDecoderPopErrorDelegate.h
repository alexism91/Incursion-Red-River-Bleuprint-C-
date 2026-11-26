#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeDecoderPopErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderPopError, EOdinError, ErrorCode);

