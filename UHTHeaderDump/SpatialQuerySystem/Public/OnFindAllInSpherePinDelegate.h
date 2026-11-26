#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnFindAllInSpherePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindAllInSpherePin, const TArray<FQuerySystemData>&, Out);

