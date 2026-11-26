#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnQueryActionBeginOverlapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryActionBeginOverlap, const FQuerySystemData&, QueryShapeData);

