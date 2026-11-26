#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkClientStatus.generated.h"

UENUM()
enum class ELiveLinkClientStatus : int32 {
    Connected,
    Disconnected,
    Recording,
};

