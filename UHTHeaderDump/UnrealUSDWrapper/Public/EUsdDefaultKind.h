#pragma once
#include "CoreMinimal.h"
#include "EUsdDefaultKind.generated.h"

UENUM(BlueprintType)
enum class EUsdDefaultKind : uint8 {
    None,
    Model,
    Component,
    Group = 4,
    Assembly = 8,
    Subcomponent = 16,
};

