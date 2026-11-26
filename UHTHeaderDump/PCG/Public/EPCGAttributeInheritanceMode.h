#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeInheritanceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGAttributeInheritanceMode : uint8 {
    None,
    CopyAttributeSetup,
};

