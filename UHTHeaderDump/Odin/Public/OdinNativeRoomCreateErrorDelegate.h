#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeRoomCreateErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomCreateError, EOdinError, ErrorCode);

