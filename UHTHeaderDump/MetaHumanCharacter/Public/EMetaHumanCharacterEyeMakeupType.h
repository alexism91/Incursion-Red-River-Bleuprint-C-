#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterEyeMakeupType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterEyeMakeupType : uint8 {
    None,
    ThinLiner,
    SoftSmokey,
    FullThinLiner,
    CatEye,
    PandaSmudge,
    DramaticSmudge,
    DoubleMod,
    ClassicBar,
    Count,
};

