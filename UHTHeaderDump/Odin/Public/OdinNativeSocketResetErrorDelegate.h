#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeSocketResetErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketResetError, EOdinError, ErrorCode);

