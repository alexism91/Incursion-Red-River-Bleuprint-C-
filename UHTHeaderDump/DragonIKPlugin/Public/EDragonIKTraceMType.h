#pragma once
#include "CoreMinimal.h"
#include "EDragonIKTraceMType.generated.h"

UENUM(BlueprintType)
enum class EDragonIKTraceMType : uint8 {
    LineTrace,
    SphereTrace,
};

