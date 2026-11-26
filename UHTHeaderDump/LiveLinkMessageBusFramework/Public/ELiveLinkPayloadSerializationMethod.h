#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkPayloadSerializationMethod.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkPayloadSerializationMethod : uint8 {
    Standard,
    Cbor,
};

