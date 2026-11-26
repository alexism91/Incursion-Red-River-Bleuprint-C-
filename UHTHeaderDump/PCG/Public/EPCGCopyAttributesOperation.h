#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyAttributesOperation.generated.h"

UENUM()
enum class EPCGCopyAttributesOperation : int32 {
    CopyEachSourceToEachTargetRespectively,
    MergeSourcesAndCopyToAllTargets,
    CopyEachSourceOnEveryTarget,
};

