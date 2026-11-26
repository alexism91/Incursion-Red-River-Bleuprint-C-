#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataCompareOperation.generated.h"

UENUM()
enum class EPCGMetadataCompareOperation : uint16 {
    Equal,
    NotEqual,
    Greater,
    GreaterOrEqual,
    Less,
    LessOrEqual,
};

