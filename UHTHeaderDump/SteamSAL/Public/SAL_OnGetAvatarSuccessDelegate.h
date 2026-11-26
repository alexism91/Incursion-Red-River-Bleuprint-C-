#pragma once
#include "CoreMinimal.h"
#include "SAL_OnGetAvatarSuccessDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnGetAvatarSuccess, UTexture2D*, Avatar);

