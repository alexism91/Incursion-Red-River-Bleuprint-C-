#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeRoomGetConnectionIdErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomGetConnectionIdError, EOdinError, ErrorCode);

