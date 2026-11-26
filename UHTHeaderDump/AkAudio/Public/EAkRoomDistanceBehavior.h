#pragma once
#include "CoreMinimal.h"
#include "EAkRoomDistanceBehavior.generated.h"

UENUM()
enum class EAkRoomDistanceBehavior : uint32 {
    Subtract,
    Exclude,
};

