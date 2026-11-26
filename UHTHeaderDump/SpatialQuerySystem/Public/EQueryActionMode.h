#pragma once
#include "CoreMinimal.h"
#include "EQueryActionMode.generated.h"

UENUM(BlueprintType)
namespace EQueryActionMode {
    enum Type {
        GAM_AllTick,
        GAM_OneTick,
        GAM_Period,
        GAM_RandomPeriod,
        GAM_PeriodScan,
    };
}

