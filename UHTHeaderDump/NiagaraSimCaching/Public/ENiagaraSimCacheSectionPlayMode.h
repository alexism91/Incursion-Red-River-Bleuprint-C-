#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimCacheSectionPlayMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSimCacheSectionPlayMode : uint8 {
    SimWithoutCache,
    DisplayCacheOnly,
};

