#pragma once
#include "CoreMinimal.h"
#include "EPCGWorldQueryFilter.generated.h"

UENUM(BlueprintType)
enum class EPCGWorldQueryFilter : uint8 {
    None,
    Include,
    Exclude,
    Require,
    NoTagFilter = None,
    IncludeTagged = Include,
    ExcludeTagged = Exclude,
};

