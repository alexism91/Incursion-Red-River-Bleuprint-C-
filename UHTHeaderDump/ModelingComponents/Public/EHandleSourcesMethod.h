#pragma once
#include "CoreMinimal.h"
#include "EHandleSourcesMethod.generated.h"

UENUM(BlueprintType)
enum class EHandleSourcesMethod : uint8 {
    DeleteSources,
    HideSources,
    KeepSources,
    KeepFirstSource,
    KeepLastSource,
};

