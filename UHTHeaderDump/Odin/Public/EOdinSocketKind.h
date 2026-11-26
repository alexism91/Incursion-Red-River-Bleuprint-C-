#pragma once
#include "CoreMinimal.h"
#include "EOdinSocketKind.generated.h"

UENUM(BlueprintType)
enum class EOdinSocketKind : uint8 {
    ODIN_SOCKET_KIND_RELIABLE,
    ODIN_SOCKET_KIND_UNRELIABLE,
};

