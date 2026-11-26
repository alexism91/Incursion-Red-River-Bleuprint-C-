#pragma once
#include "CoreMinimal.h"
#include "EQUA_ModifierType.generated.h"

UENUM(BlueprintType)
enum class EQUA_ModifierType : uint8 {
    Additive,
    Multiplication,
    Set,
};

