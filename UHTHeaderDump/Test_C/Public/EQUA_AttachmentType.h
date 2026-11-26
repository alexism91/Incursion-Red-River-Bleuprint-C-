#pragma once
#include "CoreMinimal.h"
#include "EQUA_AttachmentType.generated.h"

UENUM(BlueprintType)
enum class EQUA_AttachmentType : uint8 {
    Sight,
    Muzzle,
    Mag,
    Foregrip,
    PistolGrip,
    Stock,
    Tactical,
    Ammunition,
    DustCover,
    HandGuard,
    Barrel,
    RailMount,
    Base,
};

