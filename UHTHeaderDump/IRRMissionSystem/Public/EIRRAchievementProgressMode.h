#pragma once
#include "CoreMinimal.h"
#include "EIRRAchievementProgressMode.generated.h"

UENUM(BlueprintType)
enum class EIRRAchievementProgressMode : uint8 {
    AddOne,
    AddPayloadInteger,
    SetFromPayloadInteger,
};

