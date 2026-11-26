#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeSocketInfoErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketInfoError, EOdinError, ErrorCode);

