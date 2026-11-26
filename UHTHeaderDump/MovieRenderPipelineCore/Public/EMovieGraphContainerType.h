#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphContainerType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphContainerType : uint8 {
    None,
    Array,
    Set,
    Count,
};

