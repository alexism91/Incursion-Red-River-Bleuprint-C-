#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeRoomGetNameErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomGetNameError, EOdinError, ErrorCode);

