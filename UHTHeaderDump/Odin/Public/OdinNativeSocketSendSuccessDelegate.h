#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketSendSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketSendSuccess, uint32, Bytes);

