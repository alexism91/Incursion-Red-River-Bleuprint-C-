#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphPinQueryRequirement.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphPinQueryRequirement : uint8 {
    BuiltIn,
    Dynamic,
    BuiltInOrDynamic,
};

