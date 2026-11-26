#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "QuerySystemData.h"
#include "OnQueryShapeEndOverlapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQueryShapeEndOverlap, const FQuerySystemData&, QueryActionData, const FVector&, QueryActionCenter);

