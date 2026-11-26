#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataDomainFlag.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataDomainFlag : uint8 {
    Default,
    Data,
    Elements,
    Invalid = 254,
    Custom,
};

