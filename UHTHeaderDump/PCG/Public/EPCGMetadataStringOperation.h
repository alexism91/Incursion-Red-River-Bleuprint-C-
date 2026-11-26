#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataStringOperation.generated.h"

UENUM()
enum class EPCGMetadataStringOperation : uint16 {
    Append,
    Replace,
    ToUpper,
    ToLower,
    TrimStart,
    TrimEnd,
    TrimStartAndEnd,
};

