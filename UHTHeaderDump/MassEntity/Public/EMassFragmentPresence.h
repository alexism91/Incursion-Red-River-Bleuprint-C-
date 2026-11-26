#pragma once
#include "CoreMinimal.h"
#include "EMassFragmentPresence.generated.h"

UENUM(BlueprintType)
enum class EMassFragmentPresence : uint8 {
    All,
    Any,
    None,
    Optional,
    MAX,
};

