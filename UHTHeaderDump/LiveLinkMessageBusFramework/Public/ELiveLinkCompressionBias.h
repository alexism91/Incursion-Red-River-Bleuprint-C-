#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkCompressionBias.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkCompressionBias : uint8 {
    None,
    Size,
    Speed,
};

