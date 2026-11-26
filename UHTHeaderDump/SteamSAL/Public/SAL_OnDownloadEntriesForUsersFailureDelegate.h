#pragma once
#include "CoreMinimal.h"
#include "SAL_OnDownloadEntriesForUsersFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnDownloadEntriesForUsersFailure, const FString&, Error);

