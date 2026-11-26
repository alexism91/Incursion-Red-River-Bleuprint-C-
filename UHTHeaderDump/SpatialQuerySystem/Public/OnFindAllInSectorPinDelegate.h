#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnFindAllInSectorPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindAllInSectorPin, const TArray<FQuerySystemData>&, Out);

