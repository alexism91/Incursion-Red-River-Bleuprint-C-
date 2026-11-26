#pragma once
#include "CoreMinimal.h"
#include "SAL_OnGetAvatarFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnGetAvatarFailure, const FString&, ErrorMessage);

