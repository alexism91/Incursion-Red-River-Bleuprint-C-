#pragma once
#include "CoreMinimal.h"
#include "OdinSocketInfo.h"
#include "OdinNativeSocketInfoSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketInfoSuccess, FOdinSocketInfo, Info);

