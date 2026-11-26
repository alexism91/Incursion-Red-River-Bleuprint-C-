#pragma once
#include "CoreMinimal.h"
#include "EPhysicsQueryKind.generated.h"

UENUM(BlueprintType)
enum class EPhysicsQueryKind : uint8 {
    Test,
    Single,
    Multi,
};

