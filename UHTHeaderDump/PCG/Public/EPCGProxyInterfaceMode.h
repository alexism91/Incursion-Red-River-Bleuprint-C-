#pragma once
#include "CoreMinimal.h"
#include "EPCGProxyInterfaceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGProxyInterfaceMode : uint8 {
    ByNativeElement,
    ByBlueprintElement,
    BySettings,
};

