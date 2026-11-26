#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "QuerySystemData.h"
#include "OnQueryShapeDetectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQueryShapeDetected, const FQuerySystemData&, QueryActionData, const FVector&, QueryActionCenter);

