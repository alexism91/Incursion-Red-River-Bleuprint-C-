#pragma once
#include "CoreMinimal.h"
#include "EIRRCommandArgKind.generated.h"

UENUM(BlueprintType)
enum class EIRRCommandArgKind : uint8 {
    None,
    Bool,
    Int,
    Float,
    String,
};

