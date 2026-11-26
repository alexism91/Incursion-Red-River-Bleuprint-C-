#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnFindAllInBoxPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindAllInBoxPin, const TArray<FQuerySystemData>&, Out);

