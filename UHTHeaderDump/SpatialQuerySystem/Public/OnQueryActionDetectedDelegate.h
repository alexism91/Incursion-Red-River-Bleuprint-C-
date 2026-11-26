#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "OnQueryActionDetectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryActionDetected, const TArray<FQuerySystemData>&, QueryShapeData);

