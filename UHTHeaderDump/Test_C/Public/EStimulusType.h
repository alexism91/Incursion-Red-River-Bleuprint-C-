#pragma once
#include "CoreMinimal.h"
#include "EStimulusType.generated.h"

UENUM(BlueprintType)
enum class EStimulusType : uint8 {
    ShotSound,
    Footstep,
    BulletFlyBy,
    Hit,
    Grenade,
    RequestFlankingTargetSupport,
    RequestSearchingTargetSupport,
    FoundDeadBody,
    LostLineOfSight,
    BulletImpact,
};

