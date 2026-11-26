#pragma once
#include "CoreMinimal.h"
#include "EAGR_CombatColliderType.generated.h"

UENUM(BlueprintType)
enum class EAGR_CombatColliderType : uint8 {
    SimpleLineTrace,
    SimpleBoxTrace,
    SimpleCapsuleTrace,
    ComplexLineTrace,
    ComplexBoxTrace,
};

