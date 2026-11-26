#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnQueryActionEndOverlapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryActionEndOverlap, const FQuerySystemData&, QueryShapeData);

