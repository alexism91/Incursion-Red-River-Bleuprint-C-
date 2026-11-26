#pragma once
#include "CoreMinimal.h"
#include "EVersePackageType.generated.h"

UENUM(BlueprintType)
enum class EVersePackageType : uint8 {
    VNI,
    Content,
    PublishedContent,
    Assets,
};

