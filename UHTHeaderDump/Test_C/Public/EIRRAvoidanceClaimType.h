#pragma once
#include "CoreMinimal.h"
#include "EIRRAvoidanceClaimType.generated.h"

UENUM(BlueprintType)
enum class EIRRAvoidanceClaimType : uint8 {
    MoveDestination,
    GrenadeBlast,
    EnemyKnownLocation,
    AimStub,
    FirePosition,
    FireLane,
    DeadBody,
    FriendlyPosition,
    GasCloud,
    SmokeScreen,
    AirstrikeBlast,
};

