#pragma once
#include "CoreMinimal.h"
#include "EBaseCreateFromSelectedTargetType.generated.h"

UENUM()
enum class EBaseCreateFromSelectedTargetType : int32 {
    NewObject,
    FirstInputObject,
    LastInputObject,
};

