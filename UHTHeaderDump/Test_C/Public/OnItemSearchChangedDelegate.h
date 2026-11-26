#pragma once
#include "CoreMinimal.h"
#include "OnItemSearchChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSearchChanged, const FString&, NewItemSearch);

