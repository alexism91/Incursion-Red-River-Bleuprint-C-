#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeEncoderPopErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderPopError, EOdinError, ErrorCode);

