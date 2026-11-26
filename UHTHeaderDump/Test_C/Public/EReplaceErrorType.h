#pragma once
#include "CoreMinimal.h"
#include "EReplaceErrorType.generated.h"

UENUM(BlueprintType)
enum class EReplaceErrorType : uint8 {
    NoSpace,
    AttachmentsInstalled,
    Unknown,
};

