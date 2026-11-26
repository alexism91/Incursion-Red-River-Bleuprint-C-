#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeTokenGeneratorSignErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorSignError, EOdinError, ErrorCode);

