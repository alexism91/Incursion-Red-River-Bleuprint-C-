#pragma once
#include "CoreMinimal.h"
#include "EFirstPersonPrimitiveType.generated.h"

UENUM(BlueprintType)
enum class EFirstPersonPrimitiveType : uint8 {
    None,
    FirstPerson,
    WorldSpaceRepresentation,
};

