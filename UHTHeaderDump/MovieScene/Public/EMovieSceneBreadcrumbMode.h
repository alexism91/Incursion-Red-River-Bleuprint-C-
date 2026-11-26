#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBreadcrumbMode.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneBreadcrumbMode : uint8 {
    Sparse,
    Dense,
};

