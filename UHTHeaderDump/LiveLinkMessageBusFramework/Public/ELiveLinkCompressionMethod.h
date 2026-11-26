#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkCompressionMethod.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkCompressionMethod : uint8 {
    Uncompressed,
    Oodle,
    Zlib,
};

