#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTransformOperation.generated.h"

UENUM()
enum class EPCGMetadataTransformOperation : uint16 {
    Compose,
    Invert,
    Lerp,
};

