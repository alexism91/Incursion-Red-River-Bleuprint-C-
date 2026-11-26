#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataBitwiseOperation.generated.h"

UENUM()
enum class EPCGMetadataBitwiseOperation : uint16 {
    And,
    Not,
    Or,
    Xor,
};

