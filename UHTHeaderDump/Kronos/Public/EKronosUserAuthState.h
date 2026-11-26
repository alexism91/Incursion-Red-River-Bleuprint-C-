#pragma once
#include "CoreMinimal.h"
#include "EKronosUserAuthState.generated.h"

UENUM(BlueprintType)
enum class EKronosUserAuthState : uint8 {
    NotAuthenticating,
    PlatformLogin,
    ReadUserFiles,
    CustomAuthTask,
};

