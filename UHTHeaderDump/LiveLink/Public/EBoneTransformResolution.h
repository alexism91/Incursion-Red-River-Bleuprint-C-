#pragma once
#include "CoreMinimal.h"
#include "EBoneTransformResolution.generated.h"

UENUM()
enum class EBoneTransformResolution : int32 {
    KeepParent,
    KeepChild,
    Combine,
};

