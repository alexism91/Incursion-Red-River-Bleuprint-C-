#pragma once
#include "CoreMinimal.h"
#include "EMirrorOperationMode.generated.h"

UENUM(BlueprintType)
enum class EMirrorOperationMode : uint8 {
    MirrorAndAppend,
    MirrorExisting,
};

