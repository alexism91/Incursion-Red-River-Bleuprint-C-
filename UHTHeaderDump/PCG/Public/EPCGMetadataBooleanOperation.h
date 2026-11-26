#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataBooleanOperation.generated.h"

UENUM()
enum class EPCGMetadataBooleanOperation : uint16 {
    And,
    Not,
    Or,
    Xor,
};

