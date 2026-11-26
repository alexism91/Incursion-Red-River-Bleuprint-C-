#pragma once
#include "CoreMinimal.h"
#include "OnTextUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextUpdated, const FString&, Output);

