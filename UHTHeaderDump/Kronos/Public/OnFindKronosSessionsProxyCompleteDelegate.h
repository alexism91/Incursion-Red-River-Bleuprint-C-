#pragma once
#include "CoreMinimal.h"
#include "KronosSearchResult.h"
#include "OnFindKronosSessionsProxyCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindKronosSessionsProxyComplete, const TArray<FKronosSearchResult>&, Results);

