#pragma once
#include "CoreMinimal.h"
#include "EVerseEnumFlags.generated.h"

UENUM(Flags)
enum class EVerseEnumFlags : uint32 {
    None,
    NativeBound,
    UHTNative,
    EVerseEnumFlags_MAX = 4 UMETA(Hidden),
};

