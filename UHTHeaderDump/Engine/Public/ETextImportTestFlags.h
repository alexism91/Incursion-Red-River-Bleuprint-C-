#pragma once
#include "CoreMinimal.h"
#include "ETextImportTestFlags.generated.h"

UENUM(Flags)
enum class ETextImportTestFlags : uint32 {
    Default,
    FlagA,
    FlagB,
    FlagC = 4,
    FlagD = 8,
    FlagE = 16,
    TestStructDefault = 32,
    ETextImportTestFlags_MAX = 64 UMETA(Hidden),
};

