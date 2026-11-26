#pragma once
#include "CoreMinimal.h"
#include "EOdinCryptoPeerStatus.generated.h"

UENUM(BlueprintType)
enum class EOdinCryptoPeerStatus : uint8 {
    ODIN_CRYPTO_PEER_STATUS_PASSWORD_MISSMATCH = 255,
    ODIN_CRYPTO_PEER_STATUS_UNKNOWN = 0,
    ODIN_CRYPTO_PEER_STATUS_UNENCRYPTED,
    ODIN_CRYPTO_PEER_STATUS_ENCRYPTED,
};

