#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeTokenGeneratorGetKeyIdErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorGetKeyIdError, EOdinError, ErrorCode);

