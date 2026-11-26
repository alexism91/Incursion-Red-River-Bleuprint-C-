#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimCacheSectionStretchMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSimCacheSectionStretchMode : uint8 {
    Repeat,
    TimeDilate,
};

