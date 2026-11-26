#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeEncoderCreateExErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderCreateExError, EOdinError, ErrorCode);

