#pragma once
#include "CoreMinimal.h"
#include "EPCGWorldQueryFilterByTag.generated.h"

UENUM(BlueprintType)
enum class EPCGWorldQueryFilterByTag : uint8 {
    NoTagFilter,
    IncludeTagged,
    ExcludeTagged,
};

