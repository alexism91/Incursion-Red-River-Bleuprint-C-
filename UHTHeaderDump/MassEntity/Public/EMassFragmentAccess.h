#pragma once
#include "CoreMinimal.h"
#include "EMassFragmentAccess.generated.h"

UENUM(BlueprintType)
enum class EMassFragmentAccess : uint8 {
    None,
    ReadOnly,
    ReadWrite,
    MAX,
};

