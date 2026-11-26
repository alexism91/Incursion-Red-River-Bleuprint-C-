#pragma once
#include "CoreMinimal.h"
#include "EKronosUserAuthCompleteResult.generated.h"

UENUM(BlueprintType)
enum class EKronosUserAuthCompleteResult : uint8 {
    Success,
    PlatformLoginStatusLost,
    PlatformLoginFailed,
    ReadUserFilesFailed,
    CustomAuthTaskFailed,
    UnknownError,
};

