#pragma once
#include "CoreMinimal.h"
#include "MissionSearchResultDelegate.generated.h"

class UIRRMissionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMissionSearchResult, const TArray<UIRRMissionData*>&, OutData);

