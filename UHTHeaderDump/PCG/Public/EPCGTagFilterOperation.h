#pragma once
#include "CoreMinimal.h"
#include "EPCGTagFilterOperation.generated.h"

UENUM()
enum class EPCGTagFilterOperation : int32 {
    KeepOnlySelectedTags,
    DeleteSelectedTags,
};

