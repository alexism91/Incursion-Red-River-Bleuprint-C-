#pragma once
#include "CoreMinimal.h"
#include "EChaosVDParticleType.generated.h"

UENUM(BlueprintType)
enum class EChaosVDParticleType : uint8 {
    Static,
    Kinematic,
    Rigid,
    Clustered,
    StaticMesh,
    SkeletalMesh,
    GeometryCollection,
    Unknown,
};

