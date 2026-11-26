#pragma once
#include "CoreMinimal.h"
#include "EMaterialSubSurfaceType.generated.h"

UENUM(BlueprintType)
enum EMaterialSubSurfaceType {
    MSS_None,
    MSS_Wrap,
    MSS_TwoSidedWrap,
    MSS_Diffusion,
    MSS_DiffusionProfile,
    MSS_SimpleVolume,
};

