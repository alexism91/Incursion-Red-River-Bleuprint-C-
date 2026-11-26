#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkPayloadCompressionType.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkPayloadCompressionType : uint8 {
    None,
    Heuristic,
    Always,
};

