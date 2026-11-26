#pragma once
#include "CoreMinimal.h"
#include "EAlphaChannelMode.generated.h"

UENUM(BlueprintType)
namespace EAlphaChannelMode {
    enum Type {
        Disabled,
        Enabled,
        LinearColorSpaceOnly = Enabled,
        AllowThroughTonemapper = Enabled,
    };
}

