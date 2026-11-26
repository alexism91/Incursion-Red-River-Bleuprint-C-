#pragma once
#include "CoreMinimal.h"
#include "EIRRTraversalAction.generated.h"

UENUM(BlueprintType)
enum class EIRRTraversalAction : uint8 {
    Vault,
    Mantle,
    Ladder,
};

