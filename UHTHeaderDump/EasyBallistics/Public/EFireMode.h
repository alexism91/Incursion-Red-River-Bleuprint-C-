#pragma once
#include "CoreMinimal.h"
#include "EFireMode.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8 {
    FM_Auto,
    FM_Semiauto,
    FM_Burst,
    FM_InterBurst,
    FM_Manual,
    FM_Slamfire,
    FM_Gatling,
};

